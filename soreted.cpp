#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
if(n==0||n==1){
return true;


}
if(arr[0]>arr[1]){
    return false;
}
else{
    int ans = issorted(arr+1,n-1);
    return ans;
}
}
int main(){
int arr[4]={89,2,2,96};
    cout<<issorted(arr,4);


}