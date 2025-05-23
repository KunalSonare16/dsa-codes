#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int n) {
        this->data = n;
        this->next = NULL;
    }
};

void insertionathead(node* &head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertionattale(node* &tale, int d) {
    node* temp = new node(d);
    tale->next = temp;
    tale = temp;
}

void insertatmiddle(node* &tale, node* &head, int position, int d) {
    if (position == 1) {
        insertionathead(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    while (count < position - 1) {
        if (temp->next == NULL) {
            insertionattale(tale, d);  // Insert at tail if position is beyond current length
            return;
        }
        temp = temp->next;
        count++;
    }

    node* tempe = new node(d);
    tempe->next = temp->next;
    temp->next = tempe;

    if (tempe->next == NULL) {
        tale = tempe;  // Update tail if new node is now the last
    }
}

void printll(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* n1 = new node(30);
    node* head = n1;
    node* tale = n1;

    insertatmiddle(tale, head, 1, 10);  // Insert at head
    insertatmiddle(tale, head, 2, 20);  // Insert in middle
    insertatmiddle(tale, head, 4, 40);  // Insert at tail

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tale->data << endl;
    printll(head);  // Output: 10 20 30 40

    return 0;
}
