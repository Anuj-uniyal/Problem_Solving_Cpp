// You are given an array of integers. Your task is to reverse the  array and print the modified array.
// input: The first line contains an integer n, the size of the array. The second line contains n space-separated integers representing the elements of the array.
// output: Print the reversed array as a single line of space-separated integers.
// input:5
//        1 2 3 4 5 
// output:5 4 3 2 1

#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;++i){
        cin>>arr[i];
    }
    for(int start=0,End=n-1;start<End;++start,--End){
        swap(arr[start],arr[End]);
    }

        for(int j=0;j<=n-1;++j){
            cout<<arr[j]<<" ";
        }
       return 0;
    }
    