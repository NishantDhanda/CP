#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // ways to input string
    string s1("String 1");
    string s2="String 2";
    string s3;
    getline(cin,s3);
    string s4;
    cin>>s4;                        //  does not include space and string after that

    // ways to output string
    cout<<s1<<endl;
    cout<<s2<<endl;
    int a=s3.length();
    for(int i=0;i<a;i++)
    {
        cout<<s3[i];
    }
    cout<<endl<<s4<<endl;

}
