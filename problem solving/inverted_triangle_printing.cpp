// You are given an input integer n.
// You have to print an inverted triangle pattern of height n.
// input: A single integer n.
// output: An inverted triangle pattern of height n.
// input:4
// output: 1111
//          222
//           33
//            4

#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
 for(int i=1;i<=n;++i){
     for(int j=1;j<=i-1;++j){
         cout<<" ";
     }
     for(k=1;k<=n-i+1;++k){
         cout<<i;
     }
     cout<<endl;
     
 }

    return 0;
}