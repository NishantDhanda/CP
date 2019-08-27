// check if number is odd/even(% operator takes O(n^3) time)
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Number?\n";
    cin>>n;
    if((n&1)==1)
    {
        cout<<"Odd\n";
    }
    else
    {
        cout<<"Even\n";
    }
}
