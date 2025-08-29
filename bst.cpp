#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
     int data ;
     Node * left;
     Node * right;

    Node(int d ){

        this->data = d;
        this->left = NULL;
        this ->right = NULL;
    }

};
Node* InsertintoBSt(Node * &root , int data){
if(root == NULL){
    Node* root = new Node(data);
    return root;
}
else if(data > root->data){
    root->right = InsertintoBSt(root->right,data);
}
else {
    root->left = InsertintoBSt(root->left,data);
}
return root;
}
        
    
         void  takeinput(Node * &root){
    int data;
    cin>>data;
    while(data!=-1){
     root =    InsertintoBSt(root,data);
       cin>>data;
    }

}
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        if(temp  == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
       
      else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void inorder(Node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node * root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    cout<<"Enter a values to insert in BSt : "<<endl ;
    Node * root = NULL;
  takeinput(root);
 cout<<"priting level order traversal of BST : "<<endl;
 levelordertraversal(root);
 cout<<"priting preorder traversal of BST : "<<endl;
 inorder(root);
 cout<<"priting inorder  traversal of BST : "<<endl;
 preorder(root);
 cout<<"priting postorder traversal of BST : "<<endl;
 postorder(root);



}