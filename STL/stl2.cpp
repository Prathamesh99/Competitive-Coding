#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int, int> m;
    multimap<int, int> mm;
    m[4]=10;
    m[6]=1;
    m[7]=3;
    m.insert(make_pair(10,11));
    m[1]=32;
    mm.insert(make_pair(1,3));
    mm.insert(make_pair(7,8));
    mm.insert(make_pair(2,4));
    mm.insert(make_pair(2,7));
    auto itr = m.begin();
    for(;itr!=m.end();itr++)
    {
        cout<<itr->first<<"--"<<itr->second<<endl;
    }
    multimap<int, int>::iterator itr3 = mm.begin();
    for(;itr3!=mm.end();itr3++)
    {
        cout<<itr3->first<<"-->"<<itr3->second<<endl;
    }
    return 0;
}