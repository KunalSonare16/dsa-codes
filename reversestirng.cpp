#include<iostream>
using namespace std;
string reverse(string  n , int i,int j){
if(i>j)        return ;
swap(n[i],n[j]);
i++;
j--;
reverse(n,i,j);
return n;
}
int main(){
  
    string arr={"kunal"};
  string k =   reverse(arr,0,4);
if(k==arr)     cout<<1;


}