#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<" enter the operands :3"<<endl;
    cin>>a>>b;
    char ch;
    cout<<"enter the operator :"<<endl;
    cin>>ch;
    switch (ch)
    {
    case '+': cout<<a+b;
         break;
         case '-': cout<<"addition is :" <<a-b;
         break;
         case '/': cout<<"dividend is :" <<a/b;
         break;
         case '*': cout<<"multiplication  is :" <<a*b;
         break;
         case '%': cout<<"reminder  is :" <<a%b;
         break;
    
    default:
    cout<<"invalid operator";
        break;
    }
}