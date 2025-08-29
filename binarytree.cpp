#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
public:
int data;
node *left;
node * right;
node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}
};
node* buildtree(node * root){
    cout<<"enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    } 
     cout<<"enter the data for left child for "<<data<<" : "<<endl;
    root->left = buildtree(root->left);
    cout<<"enter the data for right child for "<<data<<" : "<<endl;
    root->right = buildtree(root->right);
    return root;


}
void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * temp = q.front();
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
void reverselevelordertraversal(node * root){
    queue<node*> q;
    stack<int> s;
    q.push(root);
    q.push(NULL);
  
    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        if(temp == NULL){
            s.push(-1);
            if(!q.empty()){
                q.push(NULL);
            }
        }
       else{
      s.push(temp->data);
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
       }
    
    }
    while(!s.empty()){
   if(s.top()==-1){
    cout<<endl;
    s.pop();

   }
   else{
        cout<<s.top()<<" ";
        s.pop();
    }

}
}
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node * root = NULL;
    root =buildtree(root);
    levelordertraversal(root);
    reverselevelordertraversal(root);
    cout<<"inordder traversal : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal : "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal : "<<endl;
    postorder(root);

} 