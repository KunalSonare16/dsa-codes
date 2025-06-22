#include<iostream>
using namespace std;
int powerof2(int n ){
    if(n==0)          return 1 ;   
    if(n==1)    return 2;

   return  powerof2(n-1)*2;
}
int main(){
    cout<<powerof2(25 );
}