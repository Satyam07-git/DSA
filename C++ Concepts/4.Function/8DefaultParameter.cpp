#include<bits/stdc++.h>
using namespace std;
void power(int base, int exponent = 2){ // default value of exponent is 2..
    int ans = 1;
    for(int i=0;i<exponent;i++){
        ans *= base;
        cout << ans <<endl;
    }
}
int main(){
   power(5); // in reality..power(5,2)..bcoz default value of exponent inn 2....
   power(5,3);  //can change while calling....otherwise the default value of exponent is 2....
}  