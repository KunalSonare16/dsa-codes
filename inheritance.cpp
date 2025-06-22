#include<iostream>
using namespace std;
class human{
 public:
 int height;
 int age;
 
 int weight;
 public:
 int getage(){
    return this -> age;
 }
 void setweigth(int n ){
    this -> weight = n;
 }

};
class male:public human{
    public:
     string colour;
     void getstring(){
        cout<<"string is "<<colour;

     }


};
int main(){
    male object;
  cout<<object.age<<endl;
  cout<<object.height<<endl;
  cout<<object.weight<<endl;
  cout<<object.getage()<<endl;
  object.getstring();
}