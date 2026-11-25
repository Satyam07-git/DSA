//..Ques1..

// #include <iostream>
// using namespace std ;
// int main () {
// int a = 5, b = 10;
// if( a == b ) {
// cout << " Equal matches " << a << endl ;
// } 
// else {
// cout << "Not equal " << a << endl ;
// }
// return 0;
// } // Output..Not equal 5..

//..Ques2..

// #include<iostream>
// using namespace std ;
// int main () {
// int a = 5, b = 10;
// if( a = b) {
// cout << " Equal matches " << a << endl ;
// } else {
// cout << "Not equal " << a << endl ;
// }
// return 0;
// } // Equal Matches 10..

//..Ques3..

// #include <iostream>
// using namespace std ;
// int main () {
// int num = -7;
// if ( num >= 0) {
// cout << " Inside Positive block " << endl ;
// } else {
// cout << " Inside Negative block " << endl ;
// }
// return 0;
// } // inside negative block..

//..Ques4..

// #include<iostream>
// using namespace std ;
// int main () {
// int x = 0, y = 5;
// if( x != 0 && (y = y + 10) > 10) {
// cout << " Inside if branch " << endl ;
// }
// cout << "x = " << x << ", y = " << y << endl ;
// return 0;
// }  //Output.. x=0,y=5

//..Ques5..

// #include <iostream>
// using namespace std ;
// int main () {
// int p = 1, q = 20;
// if( p == 1 || (q = q + 5) > 25) {
// cout << " First branch hit " << endl ;
// }
// cout << "p = " << p << ", q = " << q << endl ;
// return 0;
// }  //Output..First Branch hit
//              //p=1,q=20..

//..Ques6..

// #include <iostream>
// using namespace std ;
// int main () {
// int marks = 45;
// bool pass = ( marks >= 40) ? true : false ;
// int bonus = pass ? 5 : 0;
// cout << " Pass status : " << pass << ", Bonus : " << bonus << endl ;
// return 0;
// } // Output=Pass status:1 , Bonus:5

//..Ques7..

// #include <iostream>
// using namespace std ;
// int main () {
// int x = 12 , y = 8;
// int max_val = ( x > y) ? x : y ;
// cout << " Maximum value is " << max_val << endl ;
// return 0;
// } //Output= Maximum value is 12

//..Ques8..

// #include <iostream>
// using namespace std ;
// int main () {
// int code = 2;
// switch ( code ) {
// case 1: cout << " Alpha " << endl ;
// case 2: cout << " Beta " << endl ;
// case 3: cout << " Gamma " << endl ;
// break ;
// default : cout << " Omega " << endl ;
// }
// return 0;
// }  //output.. Beta 
//            // Gamma

//..Ques9..

// #include <iostream>
// using namespace std ;
// int main () {
// int val = 65;
// switch ( val ) {
// case 'A': cout << " Character match A" << endl ; break ;
// case 65: cout << " Integer match 65" << endl ; break ;
// default : cout << "No match found " << endl ;
// }
// return 0;
// }  //Output=Error..

//..Ques10..(Concept..)

// #include <iostream>
// using namespace std ;
// int main () {
// int a = 0, b = 0;
// if (a++ && ++b) {
// cout << " Condition standard check true " << endl ;
// }
// cout << "a = " << a << ", b = " << b << endl ;
// return 0;
// } // Output= a=1 and b=0..

//..Ques11..
//Product of two integers is zero,positive or negative..

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x==0 || y==0){
//         cout<<"Product is zero.";
//     }
//     else if((x>0 && y>0) || (x<0 && y<0)){
//         cout<<"Product is positive.";
//     }
//     else{
//         cout<<"Product is negative";
//     }
//     return 0;
// }

//Q12. Take a positive integer input from the user and check if it is divisible by both 3 and
// 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint:
// Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce
// multi-step rules).

// #include <iostream>
// using namespace std ;
// int main () {
// int n;
// cin >> n;
// // 15 is the Least Common Multiple ( LCM ) of 3 and 5.
// if (n % 15 == 0) {
// cout << " Divisible by both 3 and 5" << endl ;
// } 
// else {
// cout << "Not divisible by both 3 and 5" << endl ;
// }
// return 0;
// }

// Q13. Given the number of sides n of a simple polygon and the sum of all its interior angles
// S, write a program to check if the user has provided valid dimensional specifications. Use the
// structural formula: S = (n − 2) × 180◦

// #include <iostream>
// using namespace std ;
// int main () {
// int n , S;
// cin >> n >> S ;
// // A polygon must have at least 3 sides .
// if (n > 2 && S == (n - 2) * 180) {
// cout << " Valid Polygon " << endl ;
// }
// else {
// cout << " Invalid Polygon Specifications " << endl ;
// }
// return 0;
// }

// Q14. Take two integers as input. If exactly one of them is odd, print "One is odd". If both
// are odd, print "Both are odd". If neither of them is odd, print "None is odd".
// Sample — Input: 4 7 ⇒ Output: One is odd

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x>>y;
//     if(x%2==0 && y%2!=0){
//         cout<<"One is odd";
//     }
//     else if(x%2!=0 && y%2!=0){
//         cout<<"Both are odd";
//     }
//     else{
//         cout<<"None is odd";
//     }
//     return 0;
// }

//..Method 2..

// #include <iostream>
// using namespace std ;
// int main () {
// int a , b;
// cin >> a >> b ;
// // Each condition resolves to 1 ( true ) or 0 ( false ).
// // Adding them mathematically counts how many are true !
// int oddCount = (a % 2 != 0) + (b % 2 != 0) ;
// if ( oddCount == 1) {
// cout << "One is odd " << endl ;
// } 
// else if ( oddCount == 2) {
// cout << " Both are odd " << endl ;
// } 
// else {
//  cout << " None is odd " << endl ;
// }
// return 0;
// }


// Q16. (Concept Booster: Upper/Lower Boundary constraints)
// Take a character input from the keyboard. Write a conditional structure to evaluate whether the
// provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical
// digit (0-9), or a special symbolic character.
// Sample — Input: g ⇒ Output: Lowercase Alphabet

// #include <iostream>
// using namespace std ;
// int main () {
// char ch ;
// cin >> ch ;
// if ( ch >= 'A' && ch <= 'Z') {
// cout << " Uppercase Alphabet " << endl ;
// } 
// else if ( ch >='a' && ch <= 'z') {
// cout << " Lowercase Alphabet " << endl ;
// } 
// else if ( ch >= '0' && ch <= '9') {
// cout << " Numerical Digit " << endl ;
// } 
// else {
// cout << " Special Symbolic Character " << endl ;
// }
// return 0;
// }

// Q17. (Concept Booster: Leap Year Calculation Rule)
// Write a program that takes a positive integer representing a year (e.g., 2024) and checks whether
// it is a leap year or not.
// Sample — Input: 1900 ⇒ Output: Not a Leap Year

// #include <iostream>
// using namespace std ;
// int main () {
// int year ;
// cin >> year ;
// if (( year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0) ) {
// cout << " Leap Year " << endl ;
// } 
// else {
// cout << "Not a Leap Year " << endl ;
// }
// return 0;
// }

// Q18. (Concept Booster: Coordinate System Analysis)
// Given the three coordinate points A(x1, y1), B(x2, y2), and C(x3, y3) as floating-point inputs,
// write a program to determine if all three points sit sequentially on the same straight line
// (collinear points).
// Sample — Input: 0 0 2 2 4 4 ⇒ Output: Points are Collinear

// #include <iostream>
// using namespace std ;
// int main (){
// double x1 , y1 , x2 , y2 , x3 , y3 ;
// cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
//  // Using cross - multiplication for slopes to avoid division by zero .

// if (( y2 - y1 ) * ( x3 - x2 ) == ( y3 - y2 ) * ( x2 - x1 )) {
// cout << " Points are Collinear " << endl ;
// }
// else {
// cout << " Points are Not Collinear " << endl ;
// }
// return 0;
// }


// Q19. (Concept Booster: Triangle Categorization Code)
// Take three numerical values denoting the side dimensions (a, b, c) of a shape. First, check if
// valid, further categorize as an Equilateral, Isosceles, or Scalene triangle.
// Sample — Input: 5 5 8 ⇒ Output: Isosceles Triangle

// #include <iostream>
// using namespace std ;
// int main () {
// double a , b , c;
// cin >> a >> b >> c;
// // Triangle Inequality Theorem validation
// if (a + b > c && b + c > a && c + a > b) {
//   if (a == b && b == c) {
// cout << " Equilateral Triangle " << endl ;
// } 
// else if ( a == b || b == c || c == a) {
// cout << " Isosceles Triangle " << endl ;
// } 
// else {
// cout << " Scalene Triangle " << endl ;
// }
// } 
// else {
// cout << "Not a Valid Triangle " << endl ;
// }
// return 0;
// }

// Q20. (Concept Booster: Electric Bill Multi-Tier Grid Pricing)
// Compute dynamic electricity charges with an additional structural safety surcharge of 15%
// appended to the total amount generated.
// Sample — Input: 150 units ⇒ Output: Total Bill = $316.25

#include <iostream> 
using namespace std ;
int main () {
double units ;
cin >> units ;
double baseBill = 0;
// Slab processing
if ( units <= 100) {
baseBill = units * 1.50;
} 
else if ( units <= 300) {
 baseBill = (100 * 1.50) + ( units - 100) * 2.50;
 } 
 else {
baseBill = (100 * 1.50) + (200 * 2.50) + ( units - 300) * 4.00;
}
// 15% surcharge calculation ( baseBill + ( baseBill * 0.15) )
double totalBill = baseBill * 1.15;
cout << " Total Bill = $" << totalBill << endl ;
return 0;
}

// Explanation: This code uses a "slab rate" structure (like taxes). You max out one lower tier
// before getting charged the rate for the next tier. Finally, multiplying the result by 1.15 is a
// mathematical shortcut to calculate the base bill plus an extra 15% surcharge.

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int n = a; n <= b; n++) {
        if (n == 1)
            cout << "one" << endl;
        else if (n == 2)
            cout << "two" << endl;
        else if (n == 3)
            cout << "three" << endl;
        else if (n == 4)
            cout << "four" << endl;
        else if (n == 5)
            cout << "five" << endl;
        else if (n == 6)
            cout << "six" << endl;
        else if (n == 7)
            cout << "seven" << endl;
        else if (n == 8)
            cout << "eight" << endl;
        else if (n == 9)
            cout << "nine" << endl;
        else if (n % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    return 0;
}