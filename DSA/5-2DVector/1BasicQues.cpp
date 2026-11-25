// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v1={3,7,5,2,9};
//     vector<int> v2={5,2,9};
//     vector<int> v3={1,2,3,4,4,4,4};
//     vector<int> v4={30};
//     vector<vector<int>> v ={v1,v2,v3,v4}; // Syntax..Vector of vectors..
//     // or
//     // v.push_back(v1);
//     // v.push_back(v2);
//     // v.push_back(v3);
//     // v.push_back(v4);
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//          cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// Vector of given size....

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Rows: "<<endl;
    cin>>m;
    cout<<"Enter columns: "<<endl;
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0)); //vector making
    arr.push_back(vector<int>(4,-1));
    // Output..
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

