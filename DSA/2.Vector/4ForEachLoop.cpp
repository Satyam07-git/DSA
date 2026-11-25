// We can iterate over arrays,vectors or some data structures..
// But we can't modify the elements.. 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v = {4,3,8,2,9};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     } // print with the help of index..
    
//     cout<<endl;
//     for(int ele : v){
//         cout<<ele<<" ";
//     }// vector ke pure elements ki baat ho rahi hai..or print kr raha hai..
//      // disadv..sirf ek hi order me printing hoti hai..
// }

// We can do changes in whole array using for loop..
// which is not possible using for each loop..

// Ques.. Multiply even numbers by 2 and squares the odd numbers..
// this ques can't be solve using for each loop..

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0)
        v[i]*=2;
        else
        v[i]*=v[i];
    }
    for (int ele :v){
        cout<<ele<<" ";
    }
}

