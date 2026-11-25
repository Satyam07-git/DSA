// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40};
//     for(int i=sizeof(arr)/4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {10,20,30,40,50,60,70};
//     int i=0, j=arr.size()-1;
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {10,20,30,40,50,60,70};
//     int i=0, j=arr.size()-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
// }


// Reverse only the part of an array..such as 20,30,40 only..

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {10,20,30,40,50,60,70};
    int i=1, j=arr.size()-4;
    //int i=1, j=3;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}