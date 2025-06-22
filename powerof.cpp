#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans=1;
    int i=1;
    while(i<=b){
        ans=ans*a;
       
        i++;
    }
    return ans;
}
int main(){
    int c=2,d=3;
    cout<<pow(c,d);
    return 0;
}