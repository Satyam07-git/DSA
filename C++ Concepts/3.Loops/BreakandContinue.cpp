// Break....(Loop khtm kr deta hai..todh deta hai..terminate kr deta hai..)

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==5)
//         break;
//         cout<<i<<endl;  // can't print number after 5....
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl; 
//          if(i==5)
//         break; 
//     }
// }

// Continue....It's skip the iteration....

// Print 1 to 20..except the number divisible by 4....

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
          if(i%4==0)
        continue; 
        cout<<i<<endl; 
       
    }
}