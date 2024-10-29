#include <bits/stdc++.h>
using namespace std;

int calculateHourglassSum(vector<vector<int>>& arr, int row, int col) {
    return arr[row][col] + arr[row][col+1] + arr[row][col+2] +  // top row
                          arr[row+1][col+1] +                     // middle
           arr[row+2][col] + arr[row+2][col+1] + arr[row+2][col+2]; // bottom row
}

int main() {
    // Create 6x6 array
    vector<vector<int>> arr(6, vector<int>(6));
    
    // Read input
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Initialize maximum sum to smallest possible integer
    // since sums can be negative
    int maxSum = INT_MIN;
    
    // Calculate sum for each hourglass
    for(int i = 0; i <= 3; i++) {  // Only need to check up to index 3
        for(int j = 0; j <= 3; j++) {
            int currentSum = calculateHourglassSum(arr, i, j);
            maxSum = max(maxSum, currentSum);
        }
    }
    
    cout << maxSum << endl;
    
    return 0;
}
