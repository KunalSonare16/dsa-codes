#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> a;
    a.push(10);
    a.push(30);
    a.push(90);
    a.push(20);
    a.push(80);
    a.push(60);
    a.push(70);
    a.pop();
    cout<<a.size()<<endl;
    cout<<a.empty()<<endl;
    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
cout<<endl;

}