#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    try {
        // Try to convert string to integer
        int result = stoi(S);
        cout << result << endl;
    } catch (...) {
        // If any exception occurs during conversion
        cout << "Bad String" << endl;
    }
    
    return 0;
} 