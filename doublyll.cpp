#include<iostream>
using namespace std;
class node{
    public:
    int  data ;
    node* prev;
    node * next;
    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        cout<<"deleted the node"<<endl;
    }
};
void print(node * &head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int gelength(node *& head){
    int count = 0 ;
    node * temp = head;

    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertathead(node * & head,node*&tale,int d){
    if(head==NULL){
        node * temp = new node(d);
        head=temp;
        tale = temp;
        return;
    }
    else{
    node * temp = new node(d) ;
    temp->next = head;
    head->prev = temp;
    
    head = temp;
    }
}
void insertattale(node*&tale,node*&head, int data ){
      if(tale==NULL){
        node * temp = new node(data);
        head=temp;
        tale = temp;
        return;
    }
    node* temp = new node(data);
temp->prev=tale;
tale->next = temp;
tale = temp;
  
  
}
void insertatanyposition(node* &head,node*&tale, int position,int data ){
    if(position==1){
        insertathead(head,tale,data);
        return;
    }
   
    else{
    node * temp =head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
     if (temp->next == NULL) {
        insertattale(tale, head, data);
        return;
    }
    node * nodetoinsert = new node(data);
 

    nodetoinsert->next = temp->next;
    
    nodetoinsert->prev=temp;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
   
}
}
void deletenode(int position , node*&head,node*&tale){
    if(position==1){
        node * temp = head ;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next=NULL;

        delete temp;
    }
    else{
        node* current = head ;
        node * prev = NULL;
        int count = 1;
        while(count<position){
            prev = current;
            current = current->next;
       count++;
        }
      current->prev=NULL;
       prev->next = current->next;
       tale = prev;
       current->next=NULL;
       delete current;
    }
}
int main(){
  
    node * head = NULL;
    node *tale = NULL;
    
    insertathead(head,tale,60);

    insertattale(tale,head,20);
  
    insertatanyposition(head,tale,2,30);
    insertatanyposition(head,tale,1,31);
    insertatanyposition(head,tale,5,31);
       print(head);
 deletenode(5,head,tale);
 print(head);
deletenode(1,head,tale);
 print(head);
 cout<<"head"<<head->data<<endl;
 cout<<"tale"<<tale->data<<endl;
}
