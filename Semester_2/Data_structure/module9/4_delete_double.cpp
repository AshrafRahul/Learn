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

void print_normal(Node* head) {
    Node* temp = head;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    } cout << endl;
}

void print_reverse(Node* tail) {
    Node* temp = tail;
    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    } cout << endl;
}

void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<=pos-1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    newNode->next->prev = newNode;
    newNode->prev = temp;
}

int size(Node* head) {
    Node* temp = head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    } return count;
}

void insert_head(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val) {
    Node* newNode = new Node(val);
    if(tail==NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void delete_at_position(Node* head, int pos) {
    Node* temp = head;
    for(int i=1; i<=pos-1; i++) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void delete_tail(Node* &head, Node* &tail) {
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(head ==  NULL) {
        tail = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_head(Node* &head, Node* &tail) {
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL) {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos;
    cin >> pos;
    // delete_at_position(head, pos);
    // delete_tail(tail);
    //delete_head(head);
    if(pos>=size(head)) {
        cout << "Invalid" << endl;
    }
    else if(pos==0) {
        delete_head(head, tail);
    }
    else if(pos==size(head)-1) {
        delete_tail(head, tail);
    }
    else {
        delete_at_position(head, pos);
    }
    
    print_normal(head);
    print_reverse(tail);

    return 0;
}
