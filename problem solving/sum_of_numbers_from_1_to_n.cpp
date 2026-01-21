// You are given an input integer n.
// Complete the code to calculate and print the sum of all integers from 1 to n (inclusive).   
// input: A single integer n.
// output: The sum of all integers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    int x;
    int sum=0;
    cout<<"Enter a positive number :";
    cin>>x;
    for(int i=1;i<=x;++i){
       sum+=i;
    }
     cout<<(sum)<<endl;
    return 0;
}