#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 5;
    int ans = 0 ;
    int i = 0;
    int place= 1;
    while(n!=0){
        int bit = n&1;
        ans += (bit  * place );
        place *= 10;
        n = n>>1;

  i++;
    }
    cout<<ans;
}