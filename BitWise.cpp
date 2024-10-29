#include <bits/stdc++.h>
using namespace std;

int bitwiseAnd(int N, int K) {
    int maxValue = 0;
    
    // Try all possible pairs of numbers from 1 to N
    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            int currentAnd = a & b;
            // Update maxValue if current AND is larger but still less than K
            if (currentAnd < K && currentAnd > maxValue) {
                maxValue = currentAnd;
            }
        }
    }
    
    return maxValue;
}

int main() {
    int T;
    cin >> T;
    
    for (int t = 0; t < T; t++) {
        int N, K;
        cin >> N >> K;
        cout << bitwiseAnd(N, K) << endl;
    }
    
    return 0;
}
