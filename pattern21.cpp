#include<iostream>
using namespace std;
int main(){
 int n; 
 cin>>n;
 int f=n;
 int i=1;
 while(i<=n){
        int j=1;
        int star=n-i+1;
        int space ;
        
        while(star)
        {
            cout<<"*";
            star--;
        }

         cout<<endl;
        i++;
 }
}

