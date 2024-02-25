#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head,int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    return newNode;

}

void printList(Node* head) {
    while (head!= NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    head = insert(head, 8);
    head = insert(head, 9);
    head = insert(head, 10);
    head = insert(head, 11);
    head = insert(head, 12);
    head = insert(head, 13);
    head = insert(head, 14);
    head = insert(head, 15);
    head = insert(head, 16);
    head = insert(head, 17);
    head = insert(head, 18);

    cout<<"Linked List: ";
    printList(head);
    return 0;
}