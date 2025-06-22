#include<iostream>
#include<stack>
using namespace std;
string reverse(string ans ){
    stack<char> s;
    for(int i = 0 ; i <ans.length();i++){
       s.push(ans[i]);
    }
    string rans="";
    while(!s.empty()){
      //  char ch = s.top();
        rans += s.top();
        s.pop();
    }
    return rans;
}
int main(){
    cout<<reverse("kunal")<<endl;
}