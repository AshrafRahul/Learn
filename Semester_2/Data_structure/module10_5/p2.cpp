#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; 
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if(tail==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; 
}

void insert_value(Node* &head, Node* &tail) {
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
}

void reverse(Node* head, Node* tail) {
    Node* i = head;
    Node* j = tail;
    while(i!=j && i->next!=j) {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insert_value(head, tail);
    reverse(head, tail);
    print_linked_list(head);

    return 0;
}
