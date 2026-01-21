// You are given an input integer n.
// find whether n is a prime number or not.  
// input: A single integer n.
// output: "Prime" if n is a prime number, otherwise "Not Prime".


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a postive number :";
    cin>>n;
    for(i=2;i<=sqrt(n);++i){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
    }
    if(i>sqrt(n)){
        cout<<"Prime"<<endl;
    }
    return 0;
}