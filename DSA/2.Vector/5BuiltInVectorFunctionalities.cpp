#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    // sort(v.begin(),v.end()); // sort the array in acending order..
    // for(int ele : v) cout<<ele<<" ";
    // cout<<endl;
    // reverse(v.begin(),v.end()); // reverse the array..
    // for(int ele : v) cout<<ele<<" "; 
    reverse(v.begin()+1,v.end());
    for(int ele : v) cout<<ele<<" "; 
}