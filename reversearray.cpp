#include<iostream>
#include<vector>
using namespace std;
vector<int> arrayrevse(vector<int> v,int m){
int start=m,end=v.size()-1;
while(start<end){
    swap(v[start],v[end]);
    start++;
    end--;
}
return v;
}
int main(){
    vector <int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(10);

for (int i = 0; i < 6; i++)
{
    cout<<v[i]<<"  ";
}cout<<endl;

vector <int>  ans = arrayrevse(v,2);
for (int i = 0; i < 6; i++)
{
    cout<<ans[i]<<"  ";
}

}