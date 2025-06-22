#include<iostream>
using namespace std;
int fact(int n ){
    if(n ==  0 ) return 1;
    int facte = n * fact(n-1);
    return facte;
}
int main(){
  cout<<fact(5);
}