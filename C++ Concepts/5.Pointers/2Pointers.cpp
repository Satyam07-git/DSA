// A way to store addresses of the variable....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ptr = &a; // int* .... assume it as a data type..which stores the address of int..
//     cout<<&a<<endl;
//     cout<<ptr<<endl; 
//     cout<<&ptr<<endl; // address of ptr....
// } 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;
    int* p1 = &a; 
    int* p2 = &a;
    cout<<p1<<" "<<&p1<<endl; 
    cout<<p2<<" "<<&p2<<endl;
} 
