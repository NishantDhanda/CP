// Given two numbers a and b. Minimum number of bits to be changed in a to get b
#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,j=0,k;
    cout<<"Enter a\n";
    cin>>a;
    cout<<"Enter b\n";
    cin>>b;

    // we will xor these numbers and number of set bits(1) generated would be required amount of bits to be changed

    n=a^b;
    while(n>0)
    {
        if((n&1)==1)
        {
            j++;
        }
        n=n>>1;
    }
    cout<<"Number of bits to be changed are "<<j<<endl;
}
