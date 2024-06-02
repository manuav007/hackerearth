#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    } 
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* head, Node* tail) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != tail) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* even(Node* head) {
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;
    Node* curr = head;

    while (curr != NULL) {
        if (curr->data % 2 == 0) {
            Node* start = curr;
            while (curr != NULL && curr->data % 2 == 0) {
                curr = curr->next;
            }
            Node* end = curr;
            prev->next = reverse(start, end);
            start->next = end;
            prev = start;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    Node* newHead = dummy->next;
    delete dummy;
    return newHead;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
}

int main() {
    int n;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (head == NULL) {
            head = new Node(m);
            tail = head;
        } else {
            insertAtTail(tail, m);
        }
    }
    head = even(head);
    print(head);
    return 0;
}
