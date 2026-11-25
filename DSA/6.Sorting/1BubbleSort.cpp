// Ques..Check whether the array is sorted or not..

// #include <iostream>
// #include <vector>
// using namespace std;
// bool isSorted(vector<int>& arr) {
//     int n = arr.size();
//     for(int i = 0; i <= n-2; i++) {
//         if(arr[i] > arr[i+1]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     if(isSorted(arr)) {
//         cout << "Array is Sorted";
//     }
//     else {
//         cout << "Array is Not Sorted";
//     }
//     return 0;
// }



// Bubble Sort....Compares the adjacent element....
// Concept:- Swapping....
// TC = O(n)..Best case..
// TC = O(n^2)..Average,worst..
// Average TC is general case..
// The maximum number of swaps in bubble sort=
// n(n-1)/2
// n-1 passes are required to sort....
//Stable sorting algorithm..
// No extra spaces are created..SC= O(1)..


// Method-1..
// TC = O(n^2)..Average,worst..

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> &arr){
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> arr = {5,4,3,6,2,1};
//     int n = arr.size();
//     print(arr);
//     for(int i=1;i<=n-1;i++){ // n-1
//         for(int j=0;j<=n-1;j++){ // inner loop..it's a pass..
//           if(arr[j]>arr[j+1])
//           swap(arr[j],arr[j+1]);
//         }
//     }
//     print(arr);
// }

//Method-2..Optimised code..
// TC = O(n^2)..Average,worst..

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> &arr){
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> arr = {5,4,3,6,2,1};
//     int n = arr.size();
//     print(arr);
//     for(int i=0;i<n-1;i++){ // n-1
//         for(int j=0;j<n-1-i;j++){ // inner loop..it's a pass..
//           if(arr[j]>arr[j+1])
//           swap(arr[j],arr[j+1]);
//         }
//     }
//     print(arr);
// }


// Method-3..More Optimised code..
// TC = O(n)..Best case..

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> &arr){
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> arr = {5,4,3,6,2,1};
//     int n = arr.size();
//     print(arr);
//     for(int i=0;i<n-1;i++){ // n-1
//         int swaps = 0;
//         for(int j=0;j<n-1-i;j++){ // inner loop..it's a pass..
//           if(arr[j]>arr[j+1])
//           swap(arr[j],arr[j+1]);
//           swaps++;
//         }
//         if(swaps==0) break;
//     }
//     print(arr);
// }


//Print total swaps also..

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int> &arr){
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> arr = {5,4,3,6,2,1};
//     int n = arr.size();
//     print(arr);
//     int totalSwaps=0;
//     for(int i=0;i<n-1;i++){ // n-1
//         int swaps = 0;
//         for(int j=0;j<n-1-i;j++){ // inner loop..it's a pass..
//           if(arr[j]>arr[j+1])
//           swap(arr[j],arr[j+1]);
//           swaps++;
//           totalSwaps++;
//         }
//         if(swaps==0) break;
//     }
//     print(arr);
//     cout<<"Total Swaps: "<<totalSwaps;
// }


//Ques..Sort a given array in decending order using bubble sort....
//Don't use reverse technique..



// Bubble Sort Reverse Order....
//Ques.. Write bubble sort code in such a way,such that after the
//every pass,the smallest element comes at the right place using bubble sort..



// Ques..Moves all zeros to end..

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {9,2,0,0,-4,6,0,7,0};
    int n = arr.size();
    print(arr);
    for(int i=0;i<n-1;i++){ // n-1
        for(int j=0;j<n-1-i;j++){ // inner loop..it's a pass..
          if(arr[j] == 0)
          swap(arr[j],arr[j+1]);
        }
    }
    print(arr);
}







