#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int target, int start , int end ){
     if(start>end)   return -1;
    int mid = start + (end - start )/2;
    if(arr[mid]==target)   return mid +1;
    else if (arr[mid]>target)
    {
       return  binarysearch(arr,n,target,start,mid-1);
     
    }
    else{
        
     return   binarysearch(arr,n,target,mid+1,end);
     
    }
   

}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<binarysearch(arr,5,4,0,4);
}