#include <iostream>
using namespace std;

int calculateFine(int returnDay, int returnMonth, int returnYear,
                 int dueDay, int dueMonth, int dueYear) {
    // If returned in a later year
    if (returnYear > dueYear) {
        return 10000;
    }
    
    // If returned in an earlier year or same year
    if (returnYear < dueYear) {
        return 0;
    }
    
    // If returned in a later month of the same year
    if (returnMonth > dueMonth) {
        return 500 * (returnMonth - dueMonth);
    }
    
    // If returned in an earlier month of the same year
    if (returnMonth < dueMonth) {
        return 0;
    }
    
    // If returned later in the same month
    if (returnDay > dueDay) {
        return 15 * (returnDay - dueDay);
    }
    
    // If returned on or before due date
    return 0;
}

int main() {
    int returnDay, returnMonth, returnYear;
    int dueDay, dueMonth, dueYear;
    
    // Read actual return date
    cin >> returnDay >> returnMonth >> returnYear;
    
    // Read expected return date
    cin >> dueDay >> dueMonth >> dueYear;
    
    // Calculate and print the fine
    int fine = calculateFine(returnDay, returnMonth, returnYear,
                           dueDay, dueMonth, dueYear);
    cout << fine << endl;
    
    return 0;
}
