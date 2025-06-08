#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int size;
int top;
stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
}
void push(int n){
    if(size-top>1){
    top++;
    arr[top] = n;
    }
    else{
        cout<<"stack overflow "<<endl;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stackunderflow"<<endl;
    }
}
int peek(){
if(top>=0){
    return arr[top];
}
else{
    cout<<"stack is underflow"<<endl;
    return -1;
}
}
bool isempty(){
    if(top>=0){
        return 0;
    }
    return 1;
}
};
int main(){
    stack s1(3);
    s1.push(10);
      s1.push(20);
        s1.push(50);
          s1.push(40);

    cout<<s1.peek();

}