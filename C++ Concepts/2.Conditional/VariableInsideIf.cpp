#include<iostream>
using namespace std;
int main(){
    // int x=0; // 0=false..condition is false..output..Nitin..
    // if(x)
    // cout<<"Anjali";  // anything  except 0 is True....(Real number)....
    // else
    // cout<<"Nitin";  // Output=Anjali

    // int a = 0;
    // if(a==0)
    // cout<<"Anjali";
    // else
    // cout<<"Nitin";  // Output=Anjali

    // int a = 0;
    // if(a=0) //false..
    // cout<<"Anjali";
    // else
    // cout<<"Nitin";  // Output=Nitin

    // int a = 0;
    // if(a=7) // true..
    // cout<<"Anjali";
    // else
    // cout<<"Nitin";  // Output=Anjali

    // int x=4;
    // if(x++)
    // cout<<x;
    // else
    // cout<<"Satyam";  // Output=5

    // int x=4 ,y=6;
    // if(x++ || y++)  // Short Circuiting..OR me pahela condition true hua to agla check nhi hoga..
    // cout<<x<<endl<<y;
    // else
    // cout<<"Satyam";
    // return 0;      // Output=5 6

    //  int x=4 ,y=6;
    // if(x++ && y++)  // Short Circuiting..AND me dono condition true hona chahiye..pahla condition false hua to agla check nhi hoga..
    // cout<<x<<endl<<y;
    // else
    // cout<<"Satyam";
    // return 0;      // Output=5 7

    // int x=0;
    // if(x++)  //..Uses value first..
    // cout<<"Satyam";
    // else
    // cout<<"Aniket";
    // return 0;      // Output=Aniket

    int x=0;
    if(++x)  //..Increment first..makes x=1=True..
    cout<<"Satyam";
    else
    cout<<"Aniket";
    return 0;      // Output=Satyam
}