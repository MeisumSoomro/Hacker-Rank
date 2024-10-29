#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
        Node* removeDuplicates(Node *head) {
            // If list is empty or has only one node
            if (head == NULL || head->next == NULL) {
                return head;
            }
            
            Node* current = head;
            
            // Traverse the list
            while (current->next != NULL) {
                // If current node's data equals next node's data
                if (current->data == current->next->data) {
                    Node* temp = current->next;
                    current->next = current->next->next;
                    delete temp;  // Free the duplicate node
                } else {
                    current = current->next;
                }
            }
            
            return head;
        }

        Node* insert(Node *head, int data) {
            Node* p = new Node(data);
            if (head == NULL) {
                head = p;
            } else if (head->next == NULL) {
                head->next = p;
            } else {
                Node *start = head;
                while (start->next != NULL) {
                    start = start->next;
                }
                start->next = p;
            }
            return head;
        }

        void display(Node *head) {
            Node *start = head;
            while (start) {
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
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    head = mylist.removeDuplicates(head);
    mylist.display(head);
    return 0;
}
