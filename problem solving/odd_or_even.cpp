// You have given a C++ code snippet that determines if a number is odd or even.
// Complete the code to implement this logic.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even!!"<<endl;
    }
    else{
        cout<<"The number is odd!!"<<endl;
    }
    return 0;
}