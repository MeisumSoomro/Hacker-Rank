#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <regex>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> names;
    regex pattern(".*@gmail\\.com$");
    
    for(int i = 0; i < N; i++) {
        string firstName, emailID;
        cin >> firstName >> emailID;
        
        // Check if email matches gmail.com pattern
        if(regex_match(emailID, pattern)) {
            names.push_back(firstName);
        }
    }
    
    // Sort names alphabetically
    sort(names.begin(), names.end());
    
    // Print sorted names
    for(const string& name : names) {
        cout << name << endl;
    }
    
    return 0;
}
