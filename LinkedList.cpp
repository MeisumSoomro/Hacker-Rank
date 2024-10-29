#include <iostream>
#include <cstddef>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node(int d) {
            data = d;
            next = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node *head, int data) {
            // If the list is empty, create a new head
            if(head == NULL) {
                return new Node(data);
            }
            
            // Find the last node
            Node *current = head;
            while(current->next != NULL) {
                current = current->next;
            }
            
            // Add new node at the end
            current->next = new Node(data);
            
            return head;
        }

        void display(Node *head) {
            Node *start = head;
            while(start) {
                cout << start->data << " ";
                start = start->next;
            }
        }
};

int main() {
    Node* head = NULL;
    Solution mylist;
    
    int T, data;
    cin >> T;
    
    while(T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    
    mylist.display(head);
    
    return 0;
}
