#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    
    // Input array elements
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Print in reverse order
    for(int i = N-1; i >= 0; i--) {
        cout << arr[i];
        if(i > 0) cout << " ";
    }
    
    return 0;
}
