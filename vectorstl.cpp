#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
vector <int> a(5,7);
cout<<"print a"<<endl;
for (int  i : a)
{
   cout<<i<<" ";
}cout<<endl;
vector <int> last(a);
for (int  i : last)
{
   cout<<i<<" ";
}cout<<endl;
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(1);
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(2);
cout<<"capacity"<<v.capacity()<<endl;
v.push_back(6);
cout<<"capacity"<<v.capacity()<<endl;
cout<<"size"<<v.capacity()<<endl;

cout<<"element at 2nd index "<<v.at(2)<<endl;
cout<<"front"<<v.front()<<endl;
cout<<"back"<<v.back()<<endl;

cout<<"before pop "<<endl;
for(int i : v){
    cout<<i<<" ";

}cout<<endl;

v.pop_back();

cout<<"after  pop "<<endl;
for(int i : v){
    cout<<i<<" ";

}cout<<endl;

cout<<v.size()<<endl;
v.clear();
cout<<v.size()<<endl;



}