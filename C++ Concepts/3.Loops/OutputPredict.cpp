//Ques 1..

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else{
//             cout<<x<<" "<<y<<endl;
//         }
//     }
// }

//Ques 2..

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         if(x==y)
//         break;
//         else{
//             cout<<x<<" "<<y<<endl;
//             x--;
//             y++;
//         }
//     }
// }

//Ques 3..(Concept..)

// #include<iostream>
// using namespace std;
// int main(){
//     int t=4;
//     while(t--){
//         cout<<"Hello"<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int t=10;
    while(t/=2){
        cout<<"Hello"<<endl;
    }
}