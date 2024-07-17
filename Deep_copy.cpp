#include <iostream>
using namespace std;

class Base {
public:
    int a = 5, b = 6;
    int* p;

public:
    Base() {
        p = new int;
    }

    void show(void) {
        cout << a << "  " << b << endl;
        cout << *p << endl;
    }

    void adress(void) {
        cout << &a << "  " << &b << endl;
    }

    Base(const Base& b) { // Copy constructor
        this->a = b.a+5;
        this->b = b.b;
        p = new int;
        *p = *(b.p);
    }

    ~Base() {
        delete p;
    }
};

int main() {
    Base b1, b2;
    b1.a = 456;
    b1.show();
    b1.adress();
    // b2 = b1; // Incorrect usage: This invokes the default assignment operator, not the copy constructor.

    Base b3 = b1; // Correct usage: This will invoke the copy constructor.

    b3.show();
    b3.adress();
    return 0;
}
