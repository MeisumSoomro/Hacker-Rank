#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;  // Number of test cases
    
    // Read and process each test case
    while (T--) {
        string S;
        cin >> S;
        
        // Print even-indexed characters
        for (int i = 0; i < S.length(); i += 2) {
            cout << S[i];
        }
        
        cout << " ";  // Space between even and odd indexed characters
        
        // Print odd-indexed characters
        for (int i = 1; i < S.length(); i += 2) {
            cout << S[i];
        }
        
        cout << endl;  // New line for next test case
    }
    
    return 0;
}
