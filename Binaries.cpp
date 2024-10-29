#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;
    
    // Convert to binary and count consecutive 1's
    while (n > 0) {
        if (n % 2 == 1) {
            // Found a 1, increment current streak
            currentConsecutiveOnes++;
            // Update max if current streak is larger
            maxConsecutiveOnes = max(maxConsecutiveOnes, currentConsecutiveOnes);
        } else {
            // Found a 0, reset current streak
            currentConsecutiveOnes = 0;
        }
        n = n / 2;
    }
    
    cout << maxConsecutiveOnes << endl;
    
    return 0;
}
