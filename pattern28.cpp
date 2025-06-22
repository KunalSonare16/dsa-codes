#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;  
  while(i<=n){
    int tri1=n-i+1;
     int count=1;
    while (tri1)
    {   
        cout<<count;
        count++;
        tri1--;
    }
    int tri2=(i-1)*2;
    while (tri2--)
    {
        
        cout<<"*";
        //tri2--;
    }
   
    int tri3=n-i+1 ;
    while(tri3){
      cout<< tri3 ;
      
      tri3--;
    }

    
    cout<<endl;
    i++;
  }
 return 0;
}