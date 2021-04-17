#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <queue>

using namespace std;

// A binary tree node has data, pointer to left child and a pointer to right child
struct Node{
    int data;
    struct Node *left, *right;
    Node (int data){
        this->data = data;
        left = right = nullptr;
    }
};


// Function to build the tree
Node* buildTree(string str){
    //Corner case
    if (str.length()==0 || str[0]=='N'){
        return nullptr;
    }

    // Creating vector of strings from input
    // string after splitting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss>>str; ){
        ip.push_back(str);
    }

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting for second element
    int i=1;
    while (!queue.empty() && i<ip.size()){

        //Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N"){

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i>=ip.size()){
            break;
        }
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N"){

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}


/*
 * Input1.txt
 *       1
 *    /     \
 *   2       3
 *        /     \
 *       4       6
 *         \
 *          5
 *        /
 *       7
 */



int main() {
    std::cout << "Hello, World!" << std::endl;
    string s;
    getline(cin, s);
    cout<<s<<endl;
    Node* root = buildTree(s);

    return 0;
}
