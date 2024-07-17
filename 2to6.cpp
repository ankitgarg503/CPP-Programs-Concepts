#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;


// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to solve the 0-1 Knapsack problem
int knapsack(int capacity, const vector<Item>& items) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (items[i - 1].weight <= w) {
                dp[i][w] = max(dp[i - 1][w],
                               dp[i - 1][w - items[i - 1].weight] + items[i - 1].value);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int capacity = 10;  // Capacity of the knapsack
    vector<Item> items = {{2, 6}, {3, 8}, {4, 10}, {5, 12}};

    int maxValue = knapsack(capacity, items);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}




/*

Problem 1

int binaryToDecimal(const std::string &binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = length - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    
    return decimal;
}

string decimalToBase6(int decimal) {
    std::string base6 = "";
    
    while (decimal > 0) {
        int remainder = decimal % 6;
        base6 = char('0' + remainder) + base6;
        decimal /= 6;
    }
    
    return base6;
}

int main(){
    string s="01110";
  int ans=  binaryToDecimal(s);
  cout<<ans<<endl;
   string ans2=decimalToBase6(ans);
   cout<<ans2<<endl;

    return 0;
}
*/