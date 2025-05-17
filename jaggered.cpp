#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int *column = new int [n];
    int **arr = new int*[n];
     for(int i = 0 ; i < n ; i ++){
        
        cout<<"enter the column for row " << i << endl;
        cin>>column[i];
        arr[i]=new int[column[i]];
        cout<<"enter the elements : ";
          
        for(int j = 0 ; j < column[i];j++){
            cin>>arr[i][j];
        }
     
     }
    
       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < column[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}