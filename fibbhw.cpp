#include<iostream>
using namespace std;
int fibb(int n){
    if(n==1){
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    if(n>2){
    int fib0=0,fib1=1;
   int fibnext=1;
    for(int i=2;i<n;i++){
      fibnext=fib0+fib1;
      fib0=fib1;
      fib1=fibnext;
        
    }
    return fibnext;
}
return 0;
}
int main(){
    int c;
    cin>>c;
    cout<<fibb(c);
    return 0;
}