#include <stddef.h>
#include <vector>

using namespace std;

// struct Node {
//     int data;
//     struct Node * left;
//     struct Node * right;
// };

void traversal(Node * node, vector<int> * numbers) {
    if (node != NULL) {
        traversal(node->left, numbers);
        numbers->emplace_back(node->data);
        traversal(node->right, numbers);
    }
}

bool isBST(Node * root) {
    vector<int> numbers;
    traversal(root, &numbers);
    for (int i = 1; i < numbers.size(); ++i)
        if (numbers[i] < numbers[i-1])
            return false;
    return true;
}