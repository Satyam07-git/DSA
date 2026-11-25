// Selection Sort....find the smallest element and swaps with the first element....
// Total no. of swaps..n-1..
// TC = O(n^2)..in all cases..
// Unstable sorting algorithm..
// No. of swaps are less in comparion to bubble sort..
// No extra spaces are created..SC= O(1)..
 

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr) {
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {9,2,1,5,4,6,8,3,7};
    int n = arr.size();
    print(arr);
    for(int i = 0; i < n-1; i++) {
        int min = arr[i], minIdx = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    print(arr);
    return 0;
}


//Ques..Apply selection sort such that,the largest get in the right place and so on....
