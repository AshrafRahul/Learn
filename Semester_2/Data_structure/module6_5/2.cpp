#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, int v) {
    Node* newNode = new Node(v);
    if(head==NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

bool contains_duplicate(Node* head) {
    bool seen[101] = {false};

    Node* temp = head;
    while(temp!=NULL) {
        if(seen[temp->val]) return true;
        seen[temp->val] = true;
        temp = temp->next;
    }
}

int main() {
    int val;
    Node* head = NULL;
    while(true) {
        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, val);
    }
    if(contains_duplicate(head)) cout << "YES" << endl;
    else cout << "NO" << endl; 

    return 0;
}