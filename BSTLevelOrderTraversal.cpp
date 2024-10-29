#include <iostream>
#include <queue>
#include <cstddef>

using namespace std;	

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }
                return root;
            }
        }

        void levelOrder(Node* root) {
            if (root == NULL) return;
            
            // Create a queue for BFS
            queue<Node*> q;
            
            // Push root to queue
            q.push(root);
            
            // Process nodes level by level
            while (!q.empty()) {
                // Get front node from queue
                Node* current = q.front();
                q.pop();
                
                // Print current node's data
                cout << current->data << " ";
                
                // Add left child to queue if exists
                if (current->left != NULL) {
                    q.push(current->left);
                }
                
                // Add right child to queue if exists
                if (current->right != NULL) {
                    q.push(current->right);
                }
            }
        }
}; // End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.levelOrder(root);
    return 0;
}
