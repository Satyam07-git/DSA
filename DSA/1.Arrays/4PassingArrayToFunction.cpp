#include<iostream>
using namespace std;
// void change(int x[])
void change(int y[])//Pass by reference..
{
    // x[0]=20
     y[0]=20;
}
int main(){
    int x[] = {6,1,2};
    change(x);
    cout<<x[0]<<endl;
   
}