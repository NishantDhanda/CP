// Swapping by xor

#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,j,k;
    cout<<"Enter a and b\n";
    cin>>a>>b;

    cout<<"a is "<<a<<" and b is "<<b<<endl;

    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"After swapping a is "<<a<<" and b is "<<b<<endl;
}
