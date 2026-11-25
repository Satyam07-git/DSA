//  Star Rectangle or square....

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;  // m rows and n columns....
//     cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


//  Number Rectangle or square....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// Alphabet Rectangle or square....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=65;i<=68;i++){
//         for(int j=65;j<=68;j++){
//             cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Method 2..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }


// Upper small case alphabet....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//            if (i%2==0) cout<<(char)(i+64)<<" ";
//            else cout<<(char)(i+96)<<" ";
//         }
//         cout<<endl;
//     }
// }

// Star Triangle....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Number Triangl..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// Alphabet Triangle....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// Star Tiangle Horizontally Flipped....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print a hollow star rectangle or square....

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==m || j==1 || j==n) cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print    *
//          *
//      * * * * *
//          *
//          *

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int mid = n/2 + 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==mid || j==mid) cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
// }