#include<iostream>
using namespace  std ;

int main(){
    int m ;
    cin>>m;
    int *arr = new int[m];
    int** jaggered = new int*[m];
    for(int i = 0 ;  i < m ; i++){
        cout<<" enter columns for the row " << i << endl;
        cin>>arr[i];
        jaggered[i]= new int[arr[i]];
        
        cout<<" enter elements for column "<< i << endl;
    for(int j= 0 ; j < arr[i]; j++){
       
        cin>>jaggered[i][j];
    }
}
   
   

    for(int i = 0 ; i < m; i++){
        for(int j = 0 ; j < arr[i] ; j++){
            cout<<jaggered[i][j]<<" ";
        }
       cout<<endl;
    }
    
    for(int i = 0 ; i < m; i++){
      delete [] jaggered[i];
    }
   
delete []  jaggered;
delete [] arr;

return 0;

}
