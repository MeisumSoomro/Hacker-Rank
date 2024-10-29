#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    string name;
    long number;
    
    // Read the number of entries
    cin >> n;
    
    // Create a map to store name-number pairs
    map<string, long> phoneBook;
    
    // Read n entries and store them in the map
    for(int i = 0; i < n; i++) {
        cin >> name >> number;  // Changed to read name and number on same line
        phoneBook[name] = number;
    }
    
    // Process queries
    while(cin >> name) {  // Changed to simple cin since names are single words
        if(phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}
