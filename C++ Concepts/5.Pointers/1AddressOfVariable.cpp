// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x=7; // x  ki first byte ka address hai ye....
//     cout<<&x<<endl;  // 0x61ff0c (Location(address) where our variable x is stored..it can be changed when we run different times..)
// } 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=7 , y=10; // addresses are different....
    cout<<&x<<endl; // x ki first byte ka address hai..
    cout<<&y<<endl;
}  