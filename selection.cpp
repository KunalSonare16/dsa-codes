#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    { 
     int minumum = i;
     for (int j = i+1; j < size; j++)
     {
        if(arr[minumum]>arr[j]){
            minumum=j;
        }
     }
     swap(arr[i],arr[minumum]);
     
   
}
}
int main(){
  int   arr[]={2,7,1,8,4,2,2};
    selectionsort(arr,7);
    for (int i = 0; i <7; i++)
    {
   cout<<arr[i]<<" ";
    }
  return 0;  
}