#include<iostream>
using namespace std;
bool chechkpallindrome(string n , int i  ){
if(i>(n.length()-1)/2)   
 {     
    
    return true; 
}
if(n[i]!=n[n.length()-1-i])  {return false;}

else         {     return  chechkpallindrome(n,i+1);}

}
int main(){
    string arr = " NAYAN ";
bool c =chechkpallindrome(arr,0);
if(c==1){
cout<<"1";

}
}