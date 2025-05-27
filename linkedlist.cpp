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
void insertionattale(node * &tale, int d){
node* temp = new node(d);

tale->next = temp;
tale = temp;
}
void insertatmiddle(node*&tale,node * &head,int position , int d){
    if(position==1){
        insertionathead(head,d);
        return;
    }
    node * temp = head;
    int count = 1 ;
    while(count<position-1){
        if(temp->next==NULL){
            insertionattale(tale,d);
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
void printll(node* &head){
    node* temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
void deletenode(int position , node*&head,node*&tale){
    if(position==1){
        node * temp = head ;
        head = head->next;
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
        if(current->next==NULL){
            tale = prev;
        }
       prev->next = current->next;
       current->next=NULL;
       delete current;
    }
}
void deltetvalue(int value,node*&head,node*&tale){
    if(head->data==value){
        node * temp = head;
        head = head->next;
        temp->next = NULL;
delete temp;
    }
    node * current = head;
    node * prev = NULL;
    while(current->data!=value){
         prev = current;
        current=current->next;
       
    }
     if(current->next==NULL){
            tale = prev;
        }
    prev->next = current -> next;
    current->next = NULL;

    delete current;
}
node* flyodalgo(node* head){
    if(head == NULL) return NULL;
    node* slow = head;
    node * fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
       
        slow= slow->next;
        if(slow==fast){
            cout<<"loop is present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
node* getstartingofloop(node * head){
    if(head == NULL) return NULL;
    node * intersaction = flyodalgo(head);
    node * slow = head;
    while(slow!=intersaction){
        slow = slow->next;
        intersaction = intersaction->next;
    }
    return slow;
}
void deleteloop( node * head){
    if(head==NULL)  return;
    node * starting = getstartingofloop(head);
    node * temp = head;
    while(temp->next!=starting){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){
    node * n1 = new node(30);
   node * head = n1;
   node* tale = n1;
  insertatmiddle(tale,head,1,10);
 insertatmiddle(tale,head,2,20);
 
 insertatmiddle(tale,head,4,40);


insertatmiddle(tale,head,3,25);
tale->next = head->next;


  if(flyodalgo(head)!=NULL){
    cout<<"loop is present "<<endl;

  }
  else{
    cout<<" loop is not present";
  }
  node * ans = getstartingofloop(head);
 cout<<" starting of loop is "<<ans->data;
 deleteloop(head);
 printll(head);

}