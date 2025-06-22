#include<iostream>
using namespace std;
int binary(int arr[] ,int start , int end  , int key   ){
    if(start>end)        return -1;
  
    int mid = start + (end-start)/2;

    if(arr[mid]==key)          return mid+1;
    if(arr[mid]>key)     { return  binary(arr,start,mid-1,key);
     
}  
    else{
  return  binary(arr,mid+1,end,key);
 
    }
    return -1;

}
int main(){
  
    int arr[4]={2,3,4,8};
    cout<<binary(arr,0,4-1,8);


}