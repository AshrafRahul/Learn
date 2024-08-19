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

void insert_value(Node *&head, Node *&tail) {
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
}

bool check_equal(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL && temp2!=NULL) {
        if(temp1->val!=temp2->val) return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1==NULL && temp2==NULL;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    insert_value(head1, tail1);
    insert_value(head2, tail2);

    if(check_equal(head1, head2)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
