#include<iostream>
using namespace std;
void selectionsort( int arr[], int n){
    int minimum = -1;
    for (int  j = 0; j < n; j++)
    {
          int minimum = j;
    
    for(int i =  j + 1; i < n ; i ++){
   if(arr[minimum]>arr[i]){
    minimum = i;
   }
    }
    swap(arr[j],arr[minimum]);
}
}
int main(){
    int arr[10] = { 15 , 1 , 0 , 9 , 12 , 36 , 18 , 19 , 33 , 2 };
    selectionsort(arr,10);
    for (int  i = 0; i < 10; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}