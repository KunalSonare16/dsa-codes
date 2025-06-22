#include<iostream>
using namespace std;
#include<stack>

class SpecialStack {
    public:
        stack<int> ans;
        int mini;
    void push(int data) {
       if(ans.empty()){
           ans.push(data);
           mini = data;
       }
  
      else if(data<mini){
           ans.push(2*data-mini);
           mini = data;
       }
       else{
           ans.push(data);
       }

    }

    void pop() {
     int curr = ans.top();
     if(curr > mini){
         ans.pop();
     }
     else{
          mini = 2 * mini - curr;
          ans.pop();
     }
    }

    int top() {
        if(ans.empty()){
            return -1;
        }
        if(ans.top()<mini){
            return mini;
        }
        else{
         return ans.top();
        }
    }

    int getMin() {
        if(ans.empty()){
            return -1;
        }
        return mini;
    }  
};