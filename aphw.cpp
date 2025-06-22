#include<iostream>
using namespace std;
int ap(int n){
    return ((3*n)+7);
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"the nth term of this ap is : "<<ap(n);
    return 0;
}