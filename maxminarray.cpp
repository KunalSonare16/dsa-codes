#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5] ={2,-9,16,15};
    int arrmax=arr[0],arrmin=arr[0];
    for(int i=0;i<4;i++){
        if (arrmax<arr[i])
        {
           arrmax = arr[i];
        }
        
    }
 
    for(int i=0;i<4;i++){
        if (arrmin>arr[i])
        {
           arrmin = arr[i];
        }
        
    }
    cout<<arrmax<<endl;
    cout<<arrmin<<endl;
}