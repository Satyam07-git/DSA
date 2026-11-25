// It's called as dynamic array..Array which grows..
// Array limitation..Fixed size..
// But in dynamic array..it's like unlimited type of array..we can increase it's size..


// creating vector..

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector<int> arr(5);  // Syntax of vector.. index 0 to 4..
//     vector<int> arr(5 , 18); // Default value will be 18(use to set default value when needed..)..print 5 18's.. 
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Vector Initialisation....

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v={4,3,8,2,9};
//     cout<<v[1];
// }

// Size of a vector..

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v; // empty array..
//     vector<int> arr(5);  
//     int n = arr.size();
//     cout<<n;
// }

// functions in vectors..

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8 , -1);  
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); //It adds element at last....
    arr.push_back(14);
    arr.pop_back(); //It removes the last element..
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
    } 
}