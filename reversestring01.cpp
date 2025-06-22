#include<iostream>
using namespace std;
void reversestring(string &s,int start){
    if(start>(s.size()-1)/2)   return;
    swap(s[start],s[s.size()-1-start]);
    reversestring(s,start+1);

}
int main(){
    string s = "kunal";
    reversestring(s,0);
    cout<<s;

}