#include<iostream>
#include<vector>

using namespace std;

int minSwaps(vector<int> arr) {
    int n = arr.size();
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
        }
    }
    return swaps;
}


int mimumumSwaps(vector<int> arr) {
    int p = 0;  // 
    int swaps = 0;

    for (vector<int>::iterator i = arr.begin(); i != arr.end(); ++i) {
        p++;
        if (*i == p)   
            continue;
        else{   
            for (vector<int>::iterator j = arr.begin() + p - 1; j != arr.end(); ++j) {
                if (*j == p) {  
                    // Swap the elements
                    double temp = *j;
                    *j = *i;
                    *i = temp;

                    swaps++;
                    break;
                }
            }
        }
    }
    return swaps;
}


int main()
{
    vector<int> arr = { 11, 2, 52,6, 4, 3 };
    vector<int> arr1 = {  2, 52,6, 4, 3 };

    cout << mimumumSwaps(arr);
    cout << minSwaps(arr);

}