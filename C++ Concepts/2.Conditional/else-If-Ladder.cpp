// Else-if ladder....use for multiple conditions..

// If cost price and selling price of an item is input through the keyboard, 
// WAP to determinne whether the seller has made profit or incurred los or no profit no loss
// also determine how much profit he made or loss he incurred..

// #include<iostream>
// using namespace std;
// int main(){
//     int CP;
//     cout<<"Enter the Cost Price:";
//     cin>>CP;
//     int SP;
//     cout<<"Enter the Selling Price:";
//     cin>>SP;
//     if (CP>SP){
//         cout<<"Loss of "<<CP-SP;
//     }
//     else if(SP>CP){
//         cout<<"Profit of "<< SP-CP;
//     }
//     else{
//         cout<<"No Profit No Loss.";
//     }
    
// }


// Multiple conditions using && (logical and)(both condition must be true) and || (logical or)(one of condition must be true)....

// Take positive integer input and tell if it is a four digit number or not....
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if (n>=1000 && n<=9999){
//         cout<<"It's a 4 digit number.";
//     }
//     else{
//         cout<<"Not a 4 digit number.";
//     }
// }

// Take integer input and tell if its magnitude is smaller than 69 or not..

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if (n<69){
//         cout<<"Less than 69.";
//     }
//     else{
//         cout<<"Not less than 69.";
//     }
// }

// Take positive integer input and tell if it is divisible by 5 and 3....

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     if (n%3==0 && n%5!=0){
//         cout<<"Divisible by 3.";
//     }
//     else if (n%5==0 && n%3!=0){
//         cout<<"Divisible by 5.";
//     }
//    else if (n%5!=0 && n%3!=0){
//         cout<<"Not Divisible by 5 or 3.";
//     }
//     else{
//         cout<<"Divisible by both.";
//     }
// }

// Take 3 positive integers input and tell if they can be sides of triangle or not....

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter sides of triangle:";
//     cin>>a>>b>>c;
//     if ((a+b>c) && (a+c>b) && (b+c>a)){
//         cout<<"Sides of a triangle(Valid Triangle).";
//     }
//     else{
//        cout<<"Not the sides of triangle(Invalid Triangle).";
//     }
// }

// Capital alphabet or not....

// #include<iostream>
// using namespace std;
// int main(){
//     char n;
//     cout<<"Enter the letter:";
//     cin>>n;
//     if (n>'A' && n<'Z'){
//         cout<<"Capital Alphabet.";
//     }
//     else{
//        cout<<"Not a capital alphabet.";
//     }
// }

// Take 3 positive integers input and print the greatest of them....

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter 3 positive integers:";
//     cin>>a>>b>>c;
//     if (a>=b && a>=c){
//       cout<<"Largest is: "<<a;
//     }
//     else if (b>=a && b>=c){
//       cout<<"Largest is: "<<b;
//     }
//     else{
//        cout<<"Largest is: "<<c;
//     }
//     return 0;
// }

