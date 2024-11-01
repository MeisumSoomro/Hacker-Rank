#include <iostream>
#include <vector>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;
    
public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person {
private:
    vector<int> testScores;
    
public:
    // Constructor
    Student(string firstName, string lastName, int id, vector<int> scores) 
        : Person(firstName, lastName, id) {
        this->testScores = scores;
    }
    
    // Calculate method
    char calculate() {
        int total = 0;
        for(int score : testScores) {
            total += score;
        }
        
        int average = total / testScores.size();
        
        if (average >= 90 && average <= 100) return 'O';
        if (average >= 80 && average < 90) return 'E';
        if (average >= 70 && average < 80) return 'A';
        if (average >= 55 && average < 70) return 'P';
        if (average >= 40 && average < 55) return 'D';
        return 'T';
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    
    cin >> firstName >> lastName >> id >> numScores;
    
    vector<int> scores;
    for(int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    
    return 0;
}
