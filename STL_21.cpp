// using unordered map
// use map in place of unordered_map to store in ordered map
#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    // ways to insert
    m["Apple"]=100;              // Apple is key and 100 is value
    m.insert(make_pair("Banana",120));

    // search
    if(m.count("Apple")==1)
    {
        cout<<"Price of apple is "<<m["Apple"]<<endl;
    }
    else
    {
        cout<<"Apple does not exist"<<endl;
    }

    m.erase("Apple");
    if(m.count("Apple")==1)
    {
        cout<<"Price of apple is "<<m["Apple"]<<endl;
    }
    else
    {
        cout<<"Apple does not exist"<<endl;
    }
}
