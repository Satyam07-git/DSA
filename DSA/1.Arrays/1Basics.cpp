//..Data Structures....
//..In life,we store data in different ways for different purposes..

//..Array..
//An array is a data structure that stores a collection of elements of the same data type in contiguous memory locations. 
//Each element is accessed using an index, which usually starts at 0.

//Basics Syntax and initialisation....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[]={74,96,55,85,76};  //array creation....Syntax and initialisation..
//     cout<<marks[2]<<endl;  // Print of the element....using index number..
//     // marks[2]=23; //Updation of element....
//     // cout<<marks[2]<<endl;
//     cin>>marks[2]; // Input....
//      cout<<marks[2]<<endl;
// }


// Size of array....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[]={74,96,55,85,76,66,23,99};  
//     int marks[10]={74,96,55,85,76,66,23,99}; // print the given number with  0 0 bcoz array has only 8 elements..
//     int marks[6]={74,96,55,85,76,66,23,99};  // error bcoz array has 8 elements not 6....    
//     int marks[5]={}; //Print 0 0 0 0 0 ....take 0  as default value....
//     // cout<<size(marks)<<endl; // giving error in old c++ version....  
    
//     cout<<sizeof(marks)/4<<endl; // number of elements in array....
// }


// Output of array using loop....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[]={74,96,55,85,76,66,23,99};  
//     // for(int i=0;i<=7;i++){
//     //     cout<<marks[i]<<endl;
//     // }
//     // Generalise way to print array....
//     int n = sizeof(marks)/4;
//     for(int i=0;i<=n-1;i++){  // index= 0 to n-1....
//      cout<<marks[i]<<" ";
//     }

// }


// Garbage value....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks[4];
//     cout<<marks[6];  // Print garbage value..assume it as empty array of size 4....

// }

// Input of array elements....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: "<<" ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elements: "<<" ";
//     //input....
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }

//     // Print the negative numbers of the array....

//     for(int i=0;i<=n-1;i++){
//         if (arr[i]<0)
//         cout<<arr[i]<<" ";
//     }

// }


