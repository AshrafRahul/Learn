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
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int get_linked_list_size(Node* head) {
    int size=0;
    Node* temp = head;
    while(temp!=NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}

int main() {
    int val;
    Node* head = NULL;
    while(true) {
        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, val);
    }
    cout << get_linked_list_size(head) << endl;

    return 0;
}