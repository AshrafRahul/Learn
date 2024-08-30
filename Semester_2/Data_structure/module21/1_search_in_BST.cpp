#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        //1.
        Node* p = q.front();
        q.pop();

        //2.
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //3.
        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }
    return root;
}

bool search(Node* root, int x) {
    if(root==NULL) return false;
    if(root->val==x) return true;

    if(x < root->val) {
        return search(root->left, x);
    }
    if(x > root->val) {
        return search(root->right, x);
    }
}

int main() {
    Node* root = input_tree();
    if(search(root, 6)) cout << "Yes, found" << endl;
    else cout << "No, not found" << endl;

    return 0;
}
