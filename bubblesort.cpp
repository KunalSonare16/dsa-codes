#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    bool swapp = false;
    for(int i = 1 ; i < n ; i ++){
        for(int j =  0 ; j < n - i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp = true;
            }
        }
        if(swapp==false){
            return;
        }
    }
}
int main(){
    int arr[10] = { 1 ,10 , 3,  4 , 7 , 2 , 18 , 11 , 6 , 22 };
    bubble(arr,10);
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
}