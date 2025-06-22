#include<iostream>

using namespace std;
void swapaltnative(int arr[], int size ){
    int start =0;
    while(start<size-1)
    { int temp;
       // temp=arr[start];
      //  arr[start]=arr[start+1];
      //  arr[start+1]=temp;
        //swap(arr[start],arr[start+1]); 
        arr[start]=arr[start]+arr[start+1]-(arr[start+1]=arr[start]);
        start+=2;
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i];

    }
}
int main(){
    int arr[6]={2,4,3,6,7,8};
   
    swapaltnative(arr,6);
   printarray(arr,6);
   return 0;
}