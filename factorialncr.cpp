#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i;

    }
    return fact;
}
int ncr(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main(){
    cout<<ncr(8,2);
   return 0;
}