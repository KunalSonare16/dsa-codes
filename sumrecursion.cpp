#include<iostream>
using namespace std;
int array(int arr[]  ,int n ){
    if(n==0)        return 0;
    if(n==1)            return arr[0];
    int sum = arr[0];
    
    sum += array(arr+1,n-1);
    return sum;

}
int main(){
  
    int arr[4]={2,2,2,2};
    cout<<array(arr,4);



}