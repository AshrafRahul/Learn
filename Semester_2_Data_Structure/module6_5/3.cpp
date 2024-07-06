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
    Node* temp = head;
    while(temp!=NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    int val;

    Node* head = NULL;
    while(true) {
        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, val);
    }

    return 0;
}