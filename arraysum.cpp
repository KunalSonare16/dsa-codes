#include<iostream>
using namespace std;
int arraysum(int arr[], int n){
    if(n==0)    return 0;
  //if(n==1)     return arr[0];
//int sum = arr[0];
//sum+=arraysum(arr+1,n-1);
return arr[0]+arraysum(arr+1,n-1);
}
int main(){
        int arr[5] = {1,2,3,4,5};
        int ans = arraysum(arr,5);
        cout<<ans;
        return 0 ;
    }
