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
    if(tail ==  NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_element(Node *&head, Node *&tail) {
    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }
}

void sort_linked_list(Node*& head) {
    if(head==NULL || head->next==NULL) return;

    Node *i, *j;
    int temp;

    for(i=head; i->next!=NULL; i=i->next) {
        for(j=i->next; j!=NULL; j=j->next) {
            if(i->val > j->val) {
                temp = i->val;
                i->val = j->val;
                j->val = temp;
            }
        }
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

    insert_element(head, tail);
    sort_linked_list(head);
    print_linked_list(head);

    return 0;
}
