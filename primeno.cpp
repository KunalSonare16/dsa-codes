#include<iostream>
using namespace std;
bool primeno(int n){
for (int i = 2; i < n; i++)
{
   if (n%i==0){
    return 0;
   }
   
   
}

return 1;

}
int main(){
    cout<<primeno(9);
    cout<<primeno(2);
    cout<<primeno(15);
    cout<<primeno(6);
    cout<<primeno(8);
    return 0;
}