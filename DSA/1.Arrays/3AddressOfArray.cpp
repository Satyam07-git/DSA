#include<iostream>
using namespace std;
int main(){
    int arr[]={56,88,96,14,12,77};
    int n = sizeof(arr)/4;
    // cout<<n;
    cout<<arr<<endl;  // print the address of the 0th index of the array..
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}