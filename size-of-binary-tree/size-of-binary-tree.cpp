#include <vector>

using namespace std;

// Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    int nodecount=0;
    void getnodescount(Node* node){
        nodecount++;
        if(node->left != NULL){
            getnodescount(node->left);
        }
        if(node->right != NULL){
            getnodescount(node->right);
        }
    }
    int getSize(Node* root) {
        // code here
        getnodescount(root);
        return nodecount;
    }
};