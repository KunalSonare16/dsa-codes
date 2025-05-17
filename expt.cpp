#include<iostream>
#include<math.h>
#include<list>
using namespace std;

int main(){
list<int> l;
l.push_back(1);
l.push_front(5);
l.push_back(6);
cout<<l.empty();
cout<<l.size();
l.erase(l.begin(),l.end());
cout<<l.size();
  return 0 ;
}