// you are given the following C++ code snippet:
// You have given a C++ code snippet that calculates the grade of a student based on their marks.
// The grading criteria are as follows:
// Marks >= 90: Grade A
// Marks >= 80 and < 90: Grade B
// Marks >= 70 and < 80: Grade C
// Marks >= 60 and < 70: Grade D
// Marks < 60: Grade F
// Complete the code to implement this logic.

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Your Marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Your grade is A"<<endl;
    }
    else if(marks>=80){
        cout<<"Your grade is B"<<endl;

    }
    else if(marks>=70){
        cout<<"Your grade is C"<<endl;
    }
    else if(marks>=60){
        cout<<"Your grade is D"<<endl;
    }
    else{
        cout<<"Your grade is F"<<endl;
    }
}