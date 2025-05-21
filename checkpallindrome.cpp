#include<iostream>
using namespace std;
bool checkpallindrome(string &s,int start, int end){
    if(start>end)   return 1;
    if(s[start]!=s[end]) return 0; 
    else{
     return checkpallindrome(s,start+1,end-1);
    }
    
}
int main(){
    string s = "nayan";
   cout<<checkpallindrome(s,0,4);


}