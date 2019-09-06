// Given 2 nos. x and y. Find maximum value of xor of a and b where x<=a<=b<=y


#include "iostream"
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int num = x^y;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        msb++;
    }
    int result = 1;
    while(msb--) {
        result=result<<1;
    }
    cout<<result-1;

    return 0;
}
