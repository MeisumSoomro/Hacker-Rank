#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
        vector<int> elements;
    
    public:
        int maximumDifference;
        
        // Constructor
        Difference(vector<int> a) {
            elements = a;
            maximumDifference = 0;
        }
        
        // Method to compute the maximum difference
        void computeDifference() {
            if (elements.size() < 2) return;
            
            // Fix the signed/unsigned comparison warning
            size_t n = elements.size();
            int minElement = elements[0];
            int maxElement = elements[0];
            
            // Find min and max in a single pass
            for (size_t i = 1; i < n; i++) {
                minElement = min(minElement, elements[i]);
                maxElement = max(maxElement, elements[i]);
            }
            
            maximumDifference = abs(maxElement - minElement);
        }
}; // No extra semicolon needed here

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
