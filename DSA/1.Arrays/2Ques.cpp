// Ques.1..Print the sum of the elements of the array....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elements: ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//      cout<<sum;
// }


// Ques.2..Print the product of the elements of the array....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elements: ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int multi=1;
//     for(int i=0;i<n;i++){
//         multi*=arr[i];
//     }
//      cout<<multi;
// }


// Ques.3..Print the maximum elements of the array....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter array elements: ";
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     //int mx=arr[0];  // method 2....
//     for (int i=0;i<n;i++){
//         if(arr[i]>mx)
//         // mx= max(mx,arr[i]); 
//        mx=arr[i];
//     }
//     cout<<mx;
// }


// Ques..4..You are given an array & an integer ,find out if this integer is present in the array or not....

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x, n;

//     cout << "Enter the number to search: ";
//     cin >> x;

//     cout << "Enter the size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool found = false;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         cout << "Found";
//     else
//         cout << "Not Found";

//     return 0;
// }

// Ques 5..Print the second maximum element in the array....

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//      int mx=INT_MIN;
//     for (int i=0;i<n;i++){
//         if(arr[i]>mx) 
//        mx=arr[i];
//     }
//       int smx=INT_MIN;
//     for (int i=0;i<n;i++){
//         if(arr[i]>smx && arr[i]!=mx)  // if (arr[i]==mx) continue;
//         smx=arr[i];  // if(arr[i]>smx) smx=arr[i];
//     }
//     cout<<smx;
// }


 