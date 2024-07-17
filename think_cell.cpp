#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <functional>
#include <iomanip>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <limits>
#include <stdexcept>
#include <memory>
#include <chrono>
#include <random>

#if 1
#define OUTZ(...) std::cerr << __VA_ARGS__ << std::endl;
#else
#define OUTZ(...)
#endif

// Placeholder type exposes only '<' operation on the underlying type T
template < class T >
struct Placeholder {

    typedef T inner_type;
    typedef Placeholder< T > Self;

    Placeholder(T _i) : i(_i) { }

    friend bool operator <(const Self& x, const Self& y) {
        return x.i < y.i;
    }

    friend std::ostream& operator <<(std::ostream& os,
                  const Self& x) {
        os << x.i;
        return os;
    }
    T i;
};

template<typename K, typename V>
class interval_map {

    friend void IntervalMapTest();
    V m_valBegin;
    std::map<K,V> m_map;

public:
    // constructor associates whole range of K with val
    interval_map(V const& val)
        : m_valBegin(val)
    { }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
    void assign( K const& keyBegin, K const& keyEnd, V const& val ) {

        if(!(keyBegin < keyEnd)) // empty interval
            return;

        auto [iend,endAdded] = m_map.emplace(keyEnd, val); // NOTE: the value must be adjusted!

        auto eraseEnd = iend;
        if(endAdded) {
            // see if we insert before the first interval
            const auto& vprev = (iend == std::begin(m_map) ? m_valBegin : std::prev(iend)->second);
            if(vprev == val) {
                eraseEnd = std::next(iend); // erase iend if the values are equal
            } else { // need to correct the value of 'keyEnd'
                iend->second = vprev;
            }
        } else { // no insertion has occurred
            if(iend->second == val) {
                eraseEnd = std::next(iend);
            }
        }
        // insert with hint since keyBeg might be located just before keyEnd
        auto ibeg = m_map.insert_or_assign(iend, keyBegin, val);
        auto eraseBeg = std::next(ibeg);
        {
            const auto& vprev = (ibeg == std::begin(m_map) ? m_valBegin : std::prev(ibeg)->second);
            if(vprev == val)
                eraseBeg = ibeg; // erase begin too as we hit
        }

//        OUTZ("Erasing range: [" << eraseBeg->first << "; "
//             << (eraseEnd == end(m_map) ?  Kmax : eraseEnd->first) << ']');

        m_map.erase(eraseBeg, eraseEnd);
    }

    // look-up of the value associated with key
    V const& operator[]( K const& key ) const
    {
        auto it = m_map.upper_bound(key);
        if(it == m_map.begin()) {
            return m_valBegin;
        } else {
            return (--it)->second;
        }
    }

    void print(const std::string& msg = {}) {
        OUTZ("printing: " << msg);
        OUTZ("-oo -- > " << m_valBegin);
        for(const auto& [key, val] : m_map) {
            OUTZ(key << " ---> " << val);
        }
    }

    void clear() {
        m_map.clear();
    }

    //! tests whether intervals satisfy canonical representation
    void intervals_check() {

        const V *pprev = &m_valBegin;
        OUTZ("Checking intervals..");
        for(const auto& [k,v] : m_map) {
           // uncomment this to print intervals in the container
    #if 0
                std::cout << "[" << it->first << "; ";
                if(next != m_map.end())
                    std::cout << next->first << ") = ";
                else
                    std::cout << "+oo) = ";
                std::cout << it->second << "\n";
    #endif
            if(*pprev == v) {
                throw std::runtime_error("FATAL: incorrect intervals..");
            }
            pprev = &v;
        }
    }
};


int main() try
{
    interval_map< Placeholder<int>, char > xmap('?');

    srand(time(NULL));
    for(int i = 0; i < 10000; i++) {
        int beg = rand() % 20 - 10,
            end = beg + rand() % 100;
        char C = 'A' + rand() % 12;
        xmap.assign(beg, end, C);
        xmap.print();
        xmap.intervals_check();
    }
    return 0;
}
catch(std::exception& ex) {
    std::cerr << "Exception: " << ex.what() << std::endl;
    return -1;
}
catch(...) {
    std::cerr << "Unknown exception!" << std::endl;
    return -1;
}