#include<iostream>
using namespace std;
bool sorted(int *arr,int n){
    if(n==0 || n==1)    return 1;
    if(arr[0]>arr[1])   return 0;
    else{
        bool ans = sorted(arr+1,n-1);
        
        return  ans;
    }   
    return 0; 
}
    int main(){
        int arr[5] = {1,2,3,4,5};
        int ans = sorted(arr,5);
        cout<<ans;
        return 0 ;
    }
