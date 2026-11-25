// Print Good Morning 10 times..

// #include<iostream>
// using namespace std;
// int main(){
//   // 5 iteration of loop....
//     for(int i=1;i<=5;i++){
//         cout<<"Good Morning."<<endl;
//     }
// }

// How many times will the loop run..

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         cout<<"Good Morning."<<endl;
//     }
// }  // Answer: b-a+1..

// Print number from 1 to 100..

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
// }

// Print all even number from 1 to 100..

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if (i%2==0){
//         cout<<i<<endl;
//         }
//     }
// }

// Method 2....

// #include<iostream>
// using namespace std;
// int main(){
//     // 50 iteration..
//     for(int i=2;i<=100;i+=2){
//         cout<<i<<endl;
//     }
// }

// Method 3....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=50;i++){
//         cout<<i*2<<endl;
//     }
// }

// Print odd number...

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i+=2){
//         cout<<i<<endl;
//     }
// }

// Print all odd numbers divisible by 3 from 1 to 100....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0 && i%3==0 )  //if(i%2==1 && i%3==0)
//         cout<<i<<endl;
//     }
// }

// Method 2....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=3;i<=99;i+=6){
//         cout<<i<<endl;
//     }
// }

// Print table of 19....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<19*i<<endl;
//     }
// }

// Method 2....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=19;i<=190;i+=19){
//         cout<<i<<endl;
//     }
// }

// Print the table of n....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<n*i<<endl;
//     }
// }

// Print number from n to 1....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){     //for(int i=1;i<=n;i){
//         cout<<i<<endl;         //    cout<<n+1-i;
//     }                          // }
// }

// Display this AP....2,5,8,11...n terms....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i+=3){
//         cout<<i<<endl;
//     }
// }

// Take number of terms from user and print..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=3*n-1;i+=3){    // 'a' nth term = a+(n-1)d....(d=3)....
//         cout<<i<<endl;             //         = 3*n-1
//     }
// }

/// Method 3....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=2;
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a += 3;
//     }
// }

// For any AP....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=2 , d=3;  // Just by changing the value of first term (a) and  common difference (d)....
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a += d;
//     }
// }

//Display this GP..1,2,4,8....upto 'n'..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1 , r=2;  //  Print any GP..Just by changing the value of first term (a) and common ratio (r)....
//     for(int i=1;i<=n;i++){
//         cout<<a<<endl;
//         a *= r;
//     }
// }

// Print the series..99,95,91,87,..upto all terms which are positive....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=99;i>=0;i-=4){
//         cout<<i<<endl;
//     }
// }

// Print all the alphabets with their corresponding ASCCII values....

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=65;i<=90;i++){
//         cout<<(char)i<<" "<<i<<endl;
//     }
// }

// Take 'n' as input from user and print the following sequence..
// 1 n 2 n-1 3 n-3......

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//         for (int i = 1, j = n; i <= j; i++, j--) {
//         cout << i << " ";
//         if (i != j)
//         cout << j << " ";
//     }
//    return 0;
// }

// WAP to print all the factors of a given number....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0)
//         cout<<i<<" ";
//     }
// }

//Method 2..

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0)
//         cout<<i<<" ";
//         if(i!=n/i)
//         cout<<n/i<<" ";
//     }
// }

// WAP to check prime or not..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0)
//         count++;  // count=count+1
//     }
//     if(count==1){
//         cout<<"Neither Prime nor composite";
//     }
//    else if (count==2){
//         cout<<"Prime Number.";
//     }
//     else{
//         cout<<"Composite Number.";
//     }
// }

// Method 2....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag = false; // false means prime..
//     for(int i=2;i<=n-1;i++){     // for (int i=2;i<=sqrt(n);i++)
//         if(n%i==0) // factor mil gya..
//         flag = true;
//         break;
//     }
//     if(n==1){
//         cout<<"Neither Prime nor Composite.";
//     }
//     else if(flag==true){
//         cout<<"Composite Number.";
//     }
//     else{
//         cout<<"Prime Number.";
//     }
// }

// WAP to find factorial....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     cout<<fact;
// }

// Print a^b....

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans *= a;
         if(a==1) break;
    }
    if(a==0 && b==0) cout<<"invalid";
    cout<<ans;
}