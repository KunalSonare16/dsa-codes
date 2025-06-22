#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start =0,end = size-1;
    while (start<end)
    {
        int mid = start + (end-start)/2;
        if (mid > start && arr[mid] < arr[mid - 1]) 
     {
      
        return mid;
     }
     if (arr[mid]<arr[mid+1])
     {
      end=mid-1;
     }
     else{
        start=mid+1;
     }

     
    }
    return start;
}
int main(){
int arr[11]={7,9,10,11,13,15,1,2,3,4,5};


cout<<pivot(arr,11);









}