#include<iostream>
using namespace std;
void sort(int *arr, int n,int k=0){
if(k == n-1)   return;
int min = k;
for(int i = k ; i < n-1;i++){
  if(arr[i] < arr[min])     min = i;
}
if(arr[k]>arr[min])  { 
    swap(arr[k],arr[min]);
}
sort(arr,  n, k+1);

}

int  main(){
    int arr[6]={1,10,2,3,16,15};
    sort(arr, 6);
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
}