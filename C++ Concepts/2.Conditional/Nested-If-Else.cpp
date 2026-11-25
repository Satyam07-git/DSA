//Nested If-else..(if-else in if condition or if-else in else condition or in both)..

// A number is three digit or not..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     if (n>=100){
//       if (n<=999){
//         cout<<"3 digit number.";
//       }
//       else{
//        cout<<"Not a 3 digit number.";
//     }
//     }
//     else{
//        cout<<"Not a 3 digit number.";
//     }
//     return 0;
// }

// Greatest of three numbers....

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    if (a>=b){
      if (a>=c){
        cout<<a<<" is largest";
      }
      else{
       cout<<c<<" is largest";
    }
    }
    else{
        if(b>=c){
            cout<<b<<" is largest.";
        }
        else{
       cout<<b<<" is largest.";
        }
    }
    return 0;
}