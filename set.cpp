// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int>s;
//      s.insert(12); 
//      s.insert(13); 
//      s.insert(14); 
//      s.insert(15); 
//      s.insert(13); 
//      auto p=s.find(12);
    
//         for (auto i=p;i!=s.end();i++)
//      {
//         cout<<*i<<"  ";
//         s.erase(15);
//      }
//      cout<<endl;
//      cout<<*p<<endl;
     
     
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int orderOfLargestPlusSign(vector<vector<int>>& matrix) {
    if (matrix.empty()) {
        return 0;
    }

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> left(rows, vector<int>(cols, 0));
    vector<vector<int>> right(rows, vector<int>(cols, 0));
    vector<vector<int>> up(rows, vector<int>(cols, 0));
    vector<vector<int>> down(rows, vector<int>(cols, 0));

    // Precompute left and up arms
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 1) {
                left[i][j] = (j > 0) ? left[i][j - 1] + 1 : 1;
                up[i][j] = (i > 0) ? up[i - 1][j] + 1 : 1;
            }
        }
    }

    // Precompute right and down arms
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 0; --j) {
            if (matrix[i][j] == 1) {
                right[i][j] = (j < cols - 1) ? right[i][j + 1] + 1 : 1;
                down[i][j] = (i < rows - 1) ? down[i + 1][j] + 1 : 1;
            }
        }
    }

    int maxPlusSignSize = 0;

    // Iterate over each cell to find the minimum arm length
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 1) {
                int armLength = min({left[i][j], right[i][j], up[i][j], down[i][j]});
                maxPlusSignSize = max(maxPlusSignSize, armLength);
            }
        }
    }

    return maxPlusSignSize;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 0, 1, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}
    };

    int result = orderOfLargestPlusSign(matrix);

    cout << "Size of the biggest plus sign: " << result << endl;

    return 0;
}
