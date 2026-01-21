// You are given the following C++ code snippet that checks whether a given character is lowercase or uppercase. 
// Complete the code to implement this functionality.

// input: A single character.
// output: "Lowercase" if the character is lowercase, "Uppercase" if the character is uppercase  and "Neither" if it is neither.


#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character :";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"Neither"<<endl;
    }
    return 0;
}