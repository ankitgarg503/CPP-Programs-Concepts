#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 7, 3, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = arr[0];
    int max2 = arr[1];

    if (max2 > max1) {
        swap(max1, max2);
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "The second greatest element in the array is: " << max2 << endl;

    return 0;
}
