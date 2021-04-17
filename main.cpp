#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <queue>
#include <unordered_map>
#include <map>

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


// Given a binary tree, print its nodes in preorder
void preorderTraversal (Node *root){
    if (!root){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


// Given a binary tree, print its node in inorder
void inorderTraversal (Node *root){
    if (!root){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}


// Given a binary tree, print its node in postorder
void postorderTraversal (Node *root){
    if (!root){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}


// Given a binary tree, print its BFS traversal
void bfsTraversal (Node *root){
    queue<Node *> bfs_nodes;
    // vector to store visited is not required in case of trees
    bfs_nodes.push(root);
    while (!bfs_nodes.empty()){
        Node *ptr = bfs_nodes.front();
        bfs_nodes.pop();
        if (!ptr){
            continue;
        }
        cout<<ptr->data<<" ";
        bfs_nodes.push(ptr->left);
        bfs_nodes.push(ptr->right);
    }
}


// Given a binary tree, print its left view
void leftViewUtil (Node *root, int cur_level, int *max_level){
    if (!root){
        return;
    }
    if (*max_level<cur_level){
        cout<<root->data<<" ";
        *max_level = cur_level;
    }
    // For right view, first call the leftViewUtil() for right child then for left child.
    leftViewUtil(root->left, cur_level+1, max_level);
    leftViewUtil(root->right, cur_level+1, max_level);
}
void leftView (Node *root){
    int max_level=0;
    leftViewUtil(root, 1, &max_level);
}


// Given a binary tree, print its vertical order traversal
void verticalTraversalUtil (Node *root, int hori_dist, map<int, vector<int>> &hori_dist_map){
    if (!root){
        return;
    }
    hori_dist_map[hori_dist].push_back(root->data);
    verticalTraversalUtil(root->left, hori_dist-1, hori_dist_map);
    verticalTraversalUtil(root->right, hori_dist+1, hori_dist_map);
}
void verticalTraversal (Node *root){
    map<int, vector<int>> hori_dist_map;
    verticalTraversalUtil(root, 0, hori_dist_map);
    for (auto ele: hori_dist_map){
        for (auto i: ele.second){
            cout<<i<<" ";
        }
    }
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
    string s;
    getline(cin, s);
    cout<<"Input Binary Tree: "<<s<<endl;
    Node* root = buildTree(s);

    cout<<"\nDifferent types of Tree Traversal";

    cout<<"\nPreorder Traversal: ";
    preorderTraversal(root);

    cout<<"\nInorder Traversal: ";
    inorderTraversal(root);

    cout<<"\nPostorder Traversal: ";
    postorderTraversal(root);

    cout<<"\nBFS Traversal: ";
    bfsTraversal(root);

    cout<<"\nLeft View: ";
    leftView(root);

    cout<<"\nVertical Traversal: ";
    verticalTraversal(root);

    return 0;
}
