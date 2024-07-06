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

void print_kinked_list(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << endl;
}

void delete_node(Node* head, int pos) {
    Node *temp = head;
    for(int i=1; i<=pos-1; i++) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    } return count;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_kinked_list(head);
    int pos;
    cin >> pos;

    if(pos>=size(head)) {
        cout << "Invalid index" << endl;
    } else {
        delete_node(head, pos);
    }
    
    print_kinked_list(head);

    return 0;
}