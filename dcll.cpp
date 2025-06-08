#include<iostream>
using namespace std;

class node
{
public:
 int data ;
 node * next ;
 node * prev ;
 node(int d){
this->data = d;
this->prev = NULL;
this->next = NULL;
 }




};
void insertionattale(node * & tale, int data, int value ){
    if(tale==NULL){
        node * temp = new node( data );
        temp->next = temp;
        temp->prev = temp;
        tale = temp;
    }
    else if (tale->data == value)
    {
      node * temp = new node( data );
      temp->prev = tale;
      temp->next = tale->next;
      tale->next->prev = temp;
      tale->next = temp;
      tale = temp;

    }
    
    else{
        node * temp = new node( data );
         node * curr = tale->next;
         while(curr!=tale && curr->data!=value){
            curr = curr->next;
         }
         if(curr == tale && curr->data != value ){
            cout<<" value is not present in the list";
            return;
         }
         temp->prev = curr;
         temp->next = curr->next;
         curr->next->prev = temp;
         curr->next = temp;
         if (curr == tale) {
            tale = temp;
         }


    }
}
void deletek(node * & tale , int value){
    if(tale==NULL){
        cout<<" loist is empty";
        return;

    }
 
 
   else if( tale->prev == tale  && tale->data ==  value ){
     
         delete tale;
         tale = NULL;
    }
      node* curr = tale->next;
   do {
        if (curr->data == value) {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;stack.cpp

            // If node to delete is tail, move tail back
            if (curr == tale) {
                tale = curr->prev;
            }

            delete curr;
            return;
        }

        curr = curr->next;
    } while (curr != tale->next);

    cout << "Value not found in the list" << endl;
}



void printll(node * & tale){
     node * temp = tale->next;
    
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while (temp!=tale->next);
 cout<<endl;
    

}
int main(){
    node * tale = NULL;
    insertionattale(tale,5,2);
    insertionattale(tale,35,5);
    insertionattale(tale,6,35);
    insertionattale(tale,9,6);
    insertionattale(tale,7,5);
    insertionattale(tale,11,6);
    printll(tale);
    deletek(tale,35);
    printll(tale);
    deletek(tale,19);
    printll(tale);
    
}
