#include<iostream>
//#include "kunalclass.cpp"
using namespace std;
class kunal
{
 /*
int health;
char level;
public:
kunal(int health , char level ){
   
  this -> health = health;
  this -> level = level ;
 }
 kunal(kunal & temp){
    this->health = temp.health;
    this->level = temp.level;
 }
 void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
 }
int gethealth(){
    return health;

}
void sethealth(int n ){
    health = n;

}
*/
public:
static int timeout ;
static int random(){
  return timeout;
}

};
int kunal::timeout = 5;
int main(){
   
    cout<<kunal::random();

    /*
    kunal r(abc);
    r.print();
    abc.sethealth(99);
    cout<<abc.gethealth();
    kunal *a = new kunal;

    cout<<(*a).gethealth()<<endl;
    cout<<a->gethealth();


kunal *p = new kunal(190);
*/
  
}
