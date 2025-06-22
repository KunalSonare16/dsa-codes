#include<iostream>
using namespace std;
void mergesortedarray(int arr1[],int m,int arr2[],int n,int arr3[],int c){
    int ptr1=0,ptr2=0,ptr3=0;
    while(ptr1<m&&ptr2<n){
        if(arr1[ptr1]<arr2[ptr2]){
         arr3[ptr3]=arr1[ptr1];
         ptr3++,ptr1++;
        }
        else{
            arr3[ptr3]=arr2[ptr2];
            ptr3++,ptr2++;
        }
    }
    while(ptr1<m){
        arr3[ptr3]=arr1[ptr1];
        ptr3++,ptr1++;
    }
    while(ptr2<n){
        arr3[ptr3]=arr2[ptr2];
        ptr3++,ptr2++;
    }


}
int main(){
    int arr1[]={1,3,5,7,9},arr2[]={2,4,6,8},arr3[9]={};
   mergesortedarray(arr1,5,arr2,4,arr3,9);
  for (int  i = 0; i < 9; i++)
  {
   cout<<arr3[i]<<"   ";
  }
  return 0;
}