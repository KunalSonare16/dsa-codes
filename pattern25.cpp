#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int i=1;
     
     while(i<=n){
        int count =i;
          int space=i-1;
          while(space){
            cout<<" ";
            space--;
          }
          int j=n-i+1;
          while(j){
            cout<<count;
            count++;
           
            j--;
          }
        
          cout<<endl;
          i++;
     }
     return 0;
}