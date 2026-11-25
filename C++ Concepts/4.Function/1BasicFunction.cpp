// Function Call....

// #include<iostream>
// using namespace std;
// void fun(){
//     cout<<"Satyam Chaurasiya.";
// }
// int main(){
//     cout<<"Hello World!"<<endl;
//     fun();  // Function call..
// }


// multiple function calling..in main and within created function....

#include<iostream>
using namespace std;
void satyam(){
    cout<<"Satyam."<<endl;
}
void sumit(){
    cout<<"Sumit."<<endl;
    satyam();
}
void anjali(){
    cout<<"Anjali."<<endl;
    sumit();
}
int main(){
    anjali();
}



