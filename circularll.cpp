#include<iostream>
using namespace std;
class node{
 public: 
 int data ;
 node *next;
 node(int data ){
    this->data = data ;
    this->next = NULL;
 }
~node(){
    int value = this->data;
    if(this->next!=NULL){
        delete next;
        next = NULL;
    }
    cout<<"memory is free for node "<<value<<endl;
}


};
void insertionattale(node *& tale,int value , int data){
    if(tale==NULL){
        node * temp = new node ( data);
        tale = temp;
        temp->next = temp;
       

    }
    else{
    node * temp = tale ;
    while(temp->data!=value){
        temp=temp->next;
          if (temp == tale) {
            cout << "Value not found in the list!" << endl;
            return;
        }
    }
    node * nti = new node(data);
     if(tale==temp){
        tale = nti;
     }
    nti->next=temp->next;
    temp->next = nti;

    }
}
void deletenode(node *& tale,int value ){
      if (tale == NULL) {
        cout << "List is empty" << endl;
        return;
    }
   if(tale==tale->next&&tale->data==value){
        node *temp =tale;
        temp->next=NULL;
        tale=NULL;
        delete temp;
        return;

    }

    node * temp = tale->next;
    
    
    node *prev =tale;
    while(temp->data!=value){
        prev = temp;
        temp=temp->next;
    }
    if (temp == tale) {
        tale = prev;
    }
 

    
  prev->next=temp->next;
  temp->next=NULL;
  delete temp;

}
void print(node*&tale){
     if (tale == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    node * temp = tale->next;
   
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tale->next);
    cout << endl;
}

int main(){
    node* tale = NULL;
    insertionattale(tale,0,6);
     print(tale);
   /* insertionattale(tale,6,8);
     print(tale);
    insertionattale(tale,6,9);
     print(tale);
     insertionattale(tale, 8, 10);
      print(tale);
    insertionattale(tale, 10, 12);
    print(tale);
    insertionattale(tale, 12, 25);
    print(tale);
    cout<<tale->data<<endl;
    deletenode(tale,6);
     print(tale);
     deletenode(tale,8);
      print(tale);
      deletenode(tale,9);
       print(tale);
       deletenode(tale,10);
        print(tale);
        */
           deletenode(tale,6);
             print(tale);
}