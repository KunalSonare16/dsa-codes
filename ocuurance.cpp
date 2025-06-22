#include<iostream>
using namespace std;
int occurence(int arr[],int size, int key){
int start= 0,end = size-1,ans=0;
while (start<=end)

{
int mid=(start + (end-start)/2);
if(arr[mid]==key){
    ans++;
    end=mid-1;
}
else if (key>arr[mid])
{
    start=mid+1;
}
else{
    end=mid-1;
}


}
return ans;
}
int main(){
    int arr[11]={1,2,3,3,3,3,3,3,4,5,6};
   cout<< occurence(arr,11,3);
    return 0;
}