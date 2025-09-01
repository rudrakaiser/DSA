#include <iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node (int value) {
        data = value;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:

    List () {
        head = tail = NULL;
    }

    void pushFront (int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void printList () {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main () {
    List linkedList;

    linkedList.pushFront(1);
    linkedList.pushFront(2);
    linkedList.pushFront(3);

    linkedList.printList();   // 3 --> 2 --> 1 --> NULL

    return 0;
}