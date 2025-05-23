#include<iostream>
using namespace std;
class A{
    public :
    int a ;

    void operator + (  A &obj){
      int value1 = this->a;
      int value2 = obj.a;
      cout<<value1*value2<<endl;

    }

};
int main(){
    A obj1,obj2;
    obj1.a = 7;
    obj2.a = 3;
    obj1 + obj2;
}