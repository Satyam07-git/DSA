// It is basically the array of arrays....
//TC= O(mn)....

// Representation of 2D-Arrays/Matrix....
// Initialisation(Syntax)....

// #include<iostream>
// using namespace std;
// int main(){
//     //int arr[3][4]; // Empty 2D-Array of 3 Rows and 4 Columns....
//     int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}}; // Must have to mention number of columns..
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// Transpose Print/Column-Wise..

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}}; // Must have to mention number of columns..
   
//      for(int j=0;j<4;j++) {
//         for(int i=0;i<3;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Find the row with maximum sum..

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}}; 
//      int maxRow = 0 , maxSum = INT16_MIN;
//      for(int i=0;1<3;i++) {
//         int sum=0;
//         for(int j=0;j<4;j++){
//             sum+=arr[i][j];
//         }
//         if(sum>maxSum){
//             maxSum=sum;
//             maxRow=i;
//         }
//     }
//     cout<<maxRow<<" "<<maxSum;
// }

// Print matrix in snake pattern....

#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0;i<3;i++) {
      if(i%2==0){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
      }
      else{
        for(int j=3;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
      }
    }
}







