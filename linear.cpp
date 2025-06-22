#include<iostream>
using namespace std;
int linear(int arr[]  ,int n , int key ){
    if(n==0)        return -1;
    if(arr[0]==key)          return arr[0];
    else{
   int remaining =  linear(arr+1,n-1,key);
   return remaining;
    }
    return -1;

}
int main(){
  
    int arr[4]={4,2,2,2};
    cout<<linear(arr,4,2);



}