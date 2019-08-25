// Finding square root of number upto 2 precision using binary search

#include<iostream>
using namespace std;

float sqroot(int num,int ft,int ed)
{
    int mid;
    mid=(ft+ed)/2;
    int sq=mid*mid;
    if(ft>=ed)
    {
        return mid;
    }
    else if(sq==num)
    {
        return mid;
    }
    else if(sq>num)
    {
        sqroot(num,ft,mid-1);
    }
    else if(sq<num)
    {
        sqroot(num,mid+1,ed);
    }
}

int main()
{
    int num,i,j,ft,ed;
    cout<<"Number\n";
    cin>>num;
    ft=0;
    ed=num;
    float a,k=0.01;
    int ans=sqroot(num,ft,ed);
    a=ans;
    if((a*a)>num)
    {
        while((a*a)>num)
        {
            a=a-k;
        }
        cout<<a<<endl;
    }

    else if((a*a)<num)
    {
        while((a*a)<num)
        {
            a=a+k;
        }
        cout<<a<<endl;
    }
    else if((a*a)==num)
    {
        cout<<a<<endl;
    }

}
