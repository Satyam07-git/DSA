// Scope of Variable..

// 1.. Local Scope(Local Variable)....maine main me x bananya to usse function me use nhi kr skte....& vice versa.... 

// #include<bits/stdc++.h>
// using namespace std;
// void fun(){
//      //cout<<x;  // error..
// }
// int main(){
//     int x = 10;  //maine main me x bananya to usse function me use nhi kr skte....& vice versa.... 
//     fun();
// }

// 2. Block Scope....

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         cout<<i<<endl;
//     }
//     // cout<<i;  // error..because i is local for the for loop..print it within the for block....
// }

// 3.Global Variable....

// #include<bits/stdc++.h>
// using namespace std;
// int x=100;  //Global Variable....use in any function and can be modified....
// void fun(){
//     cout << x<<endl;
// }
// int main(){
//     cout<<x<<endl;
//     fun();
// }

// #include<bits/stdc++.h>
// using namespace std;
// int x=100;  
// void fun(){
//     x = 23;  // Can be modified....
// }
// int main(){
//     cout<<x<<endl;
//     fun();
//     cout<<x<<endl;
// }


// Local vs Global....Priority(local variable > global variable)

// #include<bits/stdc++.h>
// using namespace std;
// int x=10;  //  Global Variable..
// int main(){
//     cout<<x<<endl; // Automatically choose the global variable....
//    int x = 80;  // Local variable to main....
//     cout<<x<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int x=10; // Global Variable.... 
// void change(){
//     x = 45;  
// }
// int main(){
//     int x = 80;
//     cout<<x<<endl;
//     change();
//     cout<<x<<endl;
// }  // Output..80 80....Pass by Value Concept....


// Nested Scope (Variable Shadowing....)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x = 6;
//    {
//     int x = 8; // completely new variable....
//    }
//    cout<<x;
// }  // Output....6..

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x = 6;
//    {
//     x = 8; 
//    }
//    cout<<x;
// }  // Output..8..bcoz x = 8 is not pre intialised..therefore it change the value of x which is intialised above....


// Accessing a shadowed global variable....

// #include<bits/stdc++.h>
// using namespace std;
// int x =8;
// int main(){
//    int x=56;
//    cout<<x<<endl; // access the main local variable x = 56..
//    cout<<::x<<endl;  // access the global variable x=8..( :: --> Scope resolution operator..)
// }  