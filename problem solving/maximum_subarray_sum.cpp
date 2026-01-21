// Yor are given an array of integers. Your task is to find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// input: The first line contains an integer n, the size of the array. The second line contains n space-separated integers representing the elements of the array.
// output: Print the maximum subarray sum as a single integer.
// input:8
//        -2 1 -3 4 -1 2 1 -5 4
// output:6

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int max_sum=INT_MIN;
    for(int start=0;start<n;++start){
        int current_sum=0;
        for(int end=start;end<n;++end){
            current_sum+=arr[end];
            max_sum=max(max_sum,current_sum);

        }
    }
    cout<<"Max subarray sum is: "<<max_sum<<endl;
    return 0;
}