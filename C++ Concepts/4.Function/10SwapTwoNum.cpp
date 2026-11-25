// #include<bits/stdc++.h>
// using namespace std;
// void swap(int a, int b){  
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int a=5, b=2;
//     swap(a,b);   // can't swap because it takes the value of main function....
//     cout<<a<<" "<<b<<" "<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b){    // & --> alias..tell that use this....for value of a and b..
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=5, b=2;
    swap(a,b);  // swap the number..  
    cout<<a<<" "<<b<<" "<<endl;
}

