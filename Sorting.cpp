#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Read the array
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Track total number of swaps
    int totalSwaps = 0;
    
    // Bubble sort implementation
    for (int i = 0; i < n; i++) {
        int numberOfSwaps = 0;
        
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
                totalSwaps++;
            }
        }
        
        if (numberOfSwaps == 0) {
            break;
        }
    }
    
    // Print the required output
    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    
    return 0;
}
