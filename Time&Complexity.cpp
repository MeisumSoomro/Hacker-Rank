#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        // Handle special cases
        if (n <= 1) return false;
        if (n <= 3) return true;
        
        // If n is divisible by 2 or 3, it's not prime
        if (n % 2 == 0 || n % 3 == 0) return false;
        
        // Check for divisibility from 5 to sqrt(n)
        // We check numbers of the form 6k +/- 1
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        if (solution.isPrime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    
    return 0;
}
