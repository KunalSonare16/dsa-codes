#include<iostream>
using namespace std;
bool linear( int arr[],int n , int target){
    if(n==0)   return 0;
    if(arr[0]==target )   return 1;
    else{
   int ans = linear(arr+1,n-1,target);
    return ans;
}
    return 0;
}
int main(){
    int arr[5]= {1,2,3,4,5};
    cout<<linear(arr,5,4);
}