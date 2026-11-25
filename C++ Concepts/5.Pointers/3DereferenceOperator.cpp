// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x=7;
//    int* ptr = &x;
//    cout<<ptr<<endl;
//    cout<< *ptr <<endl; //( * )..is a Dereference operator..print the stored value of the variable whose address is stored in the ptr....
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
   int x=7;
   int* ptr = &x;
//    *ptr = 70; // We can change the value of the the x using dereference operator....
    *ptr += 8; 
    cout<<x<<endl;
}