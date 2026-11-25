// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int> v){ // Pass by value..
//     v[2]=99;
// }
// int main(){
//     vector<int> v = {4,3,8,2,9};
//     change(v);
//     cout<<v[2]<<endl;
//     // Output..8
// }

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v){ // Pass by reference..
    v[2]=99;
}
int main(){
    vector<int> v = {4,3,8,2,9};
    change(v);
    cout<<v[2]<<endl;
    // Output..99
}