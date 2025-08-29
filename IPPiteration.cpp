#include<iostream>
using namespace std;
#include<stack>
class treenode{
public:
int data;
treenode * left;
treenode * right;
treenode(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
}
};
treenode *insert(treenode * root){
    cout<<"enter the data : "<<endl;
    int n;
    cin>>n;
   
    if(n == -1){
        return NULL;
    }
 
    root = new treenode(n);
    cout<<"enter the data for the left of "<<root->data<<endl;
    root->left =insert(root->left);
    cout<<"enter the data for the right of "<<root->data<<endl;
    root->right =insert(root->right);
  return root;

}
void inorder(treenode* root){
    cout<<"inorder traversal";
    stack<treenode*> st;
    treenode*  curr = root;
    while(curr!=NULL || !st.empty()){
      while(curr!=NULL){
        st.push(curr);
        curr = curr->left;
      }
      curr = st.top();
      st.pop();
      cout<<curr->data<<" ";
      curr = curr->right;
    }
cout<<endl;
}
void preorder(treenode* root){
    cout<<"inorder traversal";
    stack<treenode*> st;
    treenode*  curr = root;
    while(curr!=NULL || !st.empty()){
      while(curr!=NULL){
        st.push(curr);
        curr = curr->left;
      }
      curr = st.top();
      st.pop();
      cout<<curr->data<<" ";
      curr = curr->right;
    }
cout<<endl;
}
int main(){
    treenode * root;
   
    root = insert(root);
    inorder(root);
    return 0;
}