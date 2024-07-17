#include <iostream>
#include <vector>

bool predictTheWinner(int N) {
    // dp[i] represents the maximum score the current player can get
    std::vector<int> dp(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        dp[i] = i; // The maximum score the player can get is i by selecting i itself
        for (int j = 1; j * j <= i; ++j) {
            // The current player subtracts a perfect square j*j
            // The next player plays optimally, so we consider their worst outcome
            dp[i] = std::min(dp[i], dp[i - j * j] + 1);
        }
    }

    // If the first player's score is greater than or equal to half the total,
    // they can ensure a win
    return dp[N] * 2 >= N;
}

int main() {
    int N;
    std::cout << "Enter the starting number N: ";
    std::cin >> N;

    if (predictTheWinner(N)) {
        std::cout << "Player 1 wins!" << std::endl;
    } else {
        std::cout << "Player 2 wins!" << std::endl;
    }

    return 0;
}





// #include <iostream>
// #include <algorithm>

// int maxDifference(int arr[], int size) {
//     int evenSum = 0;
//     int oddSum = 0;

//     for (int i = 0; i < size; i++) {
//         if (i % 2 == 0) {
//             evenSum += arr[i];
//         } else {
//             oddSum += arr[i];
//         }
//     }

//     return std::abs(oddSum - evenSum);
// }

// int main() {
//     int arr[] = {2, 3, 4, 1, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int result = maxDifference(arr, size);
//     std::cout << "Maximum difference between sums: " << result << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <map>
// #include <algorithm>

// using namespace std;

// void dfs(int node, const map<int, vector<int>>& graph, vector<bool>& visited, int& count) {
//     visited[node] = true;
//     count++;

//     for (int neighbor : graph.at(node)) {
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, visited, count);
//         }
//     }
// }

// int findMaxConnectedElements(const map<int, vector<int>>& graph) {
//     int maxCount = 0;
//     vector<bool> visited(graph.size(), false);

//     for (const auto& entry : graph) {
//         int node = entry.first;
//         if (!visited[node]) {
//             int count = 0;
//             dfs(node, graph, visited, count);
//             maxCount = max(maxCount, count);
//         }
//     }

//     return maxCount;
// }

// int main() {
//     map<int, vector<int>> graph;
//     graph[0] = {1, 2};
//     graph[1] = {0, 2};
//     graph[2] = {0, 1};
//     graph[3] = {};

//     int maxConnected = findMaxConnectedElements(graph);
//     cout << "Maximum connected elements: " << maxConnected << endl;

//     return 0;
// }
