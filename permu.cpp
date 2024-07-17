#include<iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

// Function to find the kth permutation
std::string findKthPermutation(int n, int k) {
    // Create a vector with numbers from 1 to n
    std::vector<int> nums;
    for (int i = 1; i <= n; i++) {
        nums.push_back(i);
    }

    // Find the kth permutation
    int count = 1;
    while (count < k) {
        std::next_permutation(nums.begin(), nums.end());
        count++;
    }

    // Convert the vector to a string
    std::stringstream ss;
    for (int num : nums) {
        ss << num;
    }

    return ss.str();
}

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::string permutation = findKthPermutation(n, k);

    std::cout << "The kth permutation is: " << permutation << std::endl;

    return 0;
}
