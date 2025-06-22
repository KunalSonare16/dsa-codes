#include<iostream>
using namespace std;
void insertionsort(int arr[],int n ){
    int i = 0;
    while(i<n){
        int j = i  ;
        int minimum = j;
        while(j  < n){
            if(arr[minimum]>arr[j]){
                minimum = j;
            }
            j++;
        }
        if(arr[i]>arr[minimum]){
            int toswap = arr[i];
            int k = i ;
            while(k < n){
                arr[k] = arr[k+1];
                k++;
            }
            arr[i]  = toswap;
        
        }
        i++;
    }
}
int main(){
    int arr[5] = {10,5,4,6,7};
    insertionsort(arr,5);
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<endl;
    }
}