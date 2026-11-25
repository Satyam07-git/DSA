// Q1.... Take a positive integer N as input and compute the sum of all natural numbers from 1
// up to N using a loop.
// Sample 1 — Input: 5 ⇒ Output: 15
// Sample 2 — Input: 10 ⇒ Output: 55

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//     cout<<i<<endl;
//     sum+=i;
//     }
//     cout<<sum;
// }

// Q2.... Write a program that takes two integers as input and prints all the even numbers located
// strictly between them.
// Sample 1 — Input: 3 10 ⇒ Output: 4 6 8
// Sample 2 — Input: 12 21 ⇒ Output: 14 16 18 20
 
// #include<iostream>
// using namespace std;
// int main(){
//     int x , y;
//     cin>>x;
//     cin>>y;
//     for(int i=x;i<y;i++){
//         if(i%2==0){
//             cout<<i<<" ";
//         }
//     }
// }

// Q3.... Write a program to take a number as input and compute the product of all its individual
// digits.
// Sample 1 — Input: 413 ⇒ Output: 12
// Sample 2 — Input: 520 ⇒ Output: 0

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int mult=1;
//     if(n==0){
//         cout<<0;
//     }
//     else{
//         while(n>0){
//             int last= n%10;
//             mult*=last;
//             n/=10;
//         }
//      cout<<mult;
//     }
// }

// Q4....Given a positive integer N, write a program to find and print all of its divisors.
// Sample 1 — Input: 12 ⇒ Output: 1 2 3 4 6 12 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// Q5.... Write a program to find if a given positive integer is a Perfect Number. A perfect number
// is a positive integer that is equal to the sum of its proper divisors.
// Sample 1 — Input: 28 ⇒ Output: Perfect Number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==n){
//         cout<<"Perfect Number.";   
//     }
//     else{
//         cout<<"Not a Perfect Number.";
//     }
// }

// Q6.... Write a program to print all integers from 1 to 500 that are not divisible by 3. You must
// use the continue keyword.

// #include <iostream>
// using namespace std ;
// int main () {
// for( int i = 1; i <= 500; i ++) {
// if(i % 3 == 0) continue ;
// cout << i << " ";
// }
// }

// Q7.... Take an integer N as input and print the Fibonacci series up to N terms. (0, 1, 1, 2, 3, 5, . . .)
// Sample — Input: 6 ⇒ Output: 0 1 1 2 3 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0 ,b=1;
//     for (int i = 0; i <= n; i++){
//         cout<<a<<" ";
//         int nextTerm=a+b;
//         a=b;
//         b=nextTerm;
//     }
    
// }

// Q8.... Write a program to check if a given number is a Palindrome. A palindrome number
// reads the same forwards and backwards.
// Sample 1 — Input: 121 ⇒ Output: Palindrome

// #include <iostream>
// using namespace std ;
// int main () {
// int n , temp , rev = 0;
// cin >> n;
// temp = n;
// while ( temp > 0) {
// rev = rev * 10 + ( temp % 10) ;
// temp /= 10;
// }
// if( rev == n) cout << " Palindrome " << endl ;
// else cout << "Not a Palindrome " << endl ;
// }

// Q9.... Take an integer K as input. Two variables a and b can take any integer value from 1 to
// K. Write a program to print all possible ordered combinations of (a, b) on a new line.
// Sample — Input: 2 ⇒ Output: 1, 1
// 1, 2 . . .

// #include <iostream>
// using namespace std ;
// int main () {
// int K;
// cin >> K;
//  for( int a = 1; a <= K; a ++) {
//  for ( int b = 1; b <= K ; b ++) {
//  cout << a << ", " << b << endl ;
//  }
//  }
// }

//Q10.... Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit
// 7, or both, anywhere within their numerical representation.

// #include <iostream>
// using namespace std ;
// int main () {
// for( int i = 1; i <= 500; i ++) {
// int temp = i;
// bool found = false ;
// while ( temp > 0) {
// int digit = temp % 10;
// if( digit == 2 || digit == 7) {
// found = true ;
// break ;
// }
// temp /= 10;
// }
// if( found ) cout << i << " ";
//  }
//  }

//  Q11....Write a program to iterate through the numbers from 1 to 1000 and print only those
// numbers whose sum of digits is exactly 17.

// #include<iostream>
// using namespace std;
// int main(){
//   for(int i=1;i<=1000;i++){
//     int sum=0;
//     int temp=i;
//     while(temp>0){
//       int digit=temp%10;
//       sum+=digit;
//       temp/=10;
//     }
//     if(sum==17) cout<<i<<" ";
//   }
// }

// Q12..Write a program that takes two positive integers as input and prints all the prime
// numbers that lie strictly between them.
// Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   // swap if a is larger than b
//  if( a > b) {
//  int temp = a;
//  a = b;
//  b = temp ;
//  }

//  for( int i = a + 1; i < b ; i ++) {
//  bool isPrime = true ;
//  if(i <= 1) isPrime = false ;

//  for (int j = 2; j <= sqrt(i); j ++) {
//  if( i % j == 0) {
//  isPrime = false ;
//  break ;
//  }
//  }
//  if( isPrime ) cout << i << " ";
//  }
// }
