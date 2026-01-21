// You are given an input integer n.
// You have to convert the given decimal number n to its binary representation.
// input: A single integer n.
// output: Binary representation of the given decimal number n.

// input: 10
// output: 1010    

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    long long binary=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        binary+=rem*pow;
        n=n/2;
        pow*=10;
    }
    cout<<binary<<endl;
    return 0;
}