#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    try {
        int result = stoi(S);
        cout << result << endl;
    } catch (...) {
        cout << "Bad String" << endl;
    }
    
    return 0;
}
