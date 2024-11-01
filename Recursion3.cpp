#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n <= 1) {
        return 1;
    }
    
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    
    int result = factorial(n);
    cout << result << endl;
    
    return 0;
}
