#include<iostream>
using namespace std;
class node{
    public :
    int data ;
    node *next;
    node(int n ){
        this -> data = n;
        this -> next = NULL;
    }
    ~node(){
        int value =this->data ;
        if(this->next!=NULL){
            delete next ;
            this->next=NULL;
        }
        cout<<"destructor called"<<endl;
    }
};
void insertionathead(node * &head,int d){
     node * temp = new node(d);
     temp->next = head;
     head = temp;
}
void printll(node* &head){
    node* temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main(){
    node *temp = new node(50);
    node* tale = temp;
    node * head = temp;
    insertionathead(head,40);
     insertionathead(head,30);
      insertionathead(head,20);
       insertionathead(head,10);
       printll(head);
       head=tale;
       printll(head);
}