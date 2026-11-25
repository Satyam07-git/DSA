// Vector work on the concept of doubling the array..it is also an array..

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v; // empty vector..
//     v.push_back(5);
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(6);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v; // empty vector..
//     v.push_back(5);
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(3);
//     v.push_back(2);
//     v.pop_back();
//     v.pop_back();
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // empty vector..
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(2);
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
     cout<<v.size()<<" "<<v.capacity()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
}