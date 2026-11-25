// Function Overloading (Same name ke kai saare function bna diye....) is a feature in programming that lets you define multiple functions with the same name in the same scope,
// provided they have different signatures (different parameter types or counts).

//Overcome....
// 1..Change the parameter....different parameter....

// #include<bits/stdc++.h>
// using namespace std;
// void fun(){
//     cout<<"Hi"<<endl;
// }
// void fun(int x){
//     cout<<"Good Morning"<<endl;
// }
// // Give Error..
// // void fun(int x=7){
// //     cout<<"Good Morning"<<endl;
// // }
// void fun(int x, int y){
//     cout<<"Satyam"<<endl;
// }
// int main(){
//    fun();
//    fun(4);
//    fun(8,9);
// }  

// 2. Different Data Type....

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int x){
//     cout<<"Integer "<<x<<endl;
// }
// void fun(double x){
//     cout<<"Double "<<x<<endl;
// }
// void fun(char x){
//     cout<<"Character "<<x<<endl;
// }
// int main(){
//    fun(4);
//    fun(2.8);
//    fun('A');
// }

// 3. Data Type order swapped....

#include<bits/stdc++.h>
using namespace std;
void fun(int x ,char ch){
    cout<<"Integer , Char "<<x<<" "<<ch<<endl;
}
void fun(char ch,int x){
    cout<<"Character , Integer "<<ch<<" "<<x<<endl;
}
int main(){
   fun(4,'b');
   fun('A',88);
}
