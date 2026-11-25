// Return....end the function....

// #include<iostream>
// using namespace std;
// void fun(int a){
//     cout<<a<<endl;
//     if(a>20) return; // End the function....in void....
//     cout<<a*a<<endl;
// }
// int main(){
//     fun(27);
// }

//return type....

// #include<iostream>
// using namespace std;
// int product(int a, int b){
//     return a*b;  // do kaam hua..1..function khtm or 2..function ki khud ki ek value aai....
// }
// int main(){
//   cout<<product(4,11);
// }

#include<iostream>
using namespace std;
int product(int a, int b){
    return a*b;  // do kaam hua..1..function khtm or 2..function ki khud ki ek value aai....
}
int main(){
  int x=product(4,11);
  cout<<x;
}