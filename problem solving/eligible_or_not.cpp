// You are given a C++ code snippet that determines if a person is eligible to vote based on their age.
// The eligibility criteria state that a person must be at least 18 years old to vote.
// Complete the code to implement this logic.

// input:5
// output:You are underage!!

// input:20
// output:You are eligible to vote!!



#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote!!"<<endl;
    }
    else{
        cout<<"You are underage!!"<<endl;
    }
    return 0;

}