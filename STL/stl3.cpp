//IMPLEMENTATION OF SET
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(100);
    s.insert(104);
    s.insert(104);
    s.insert(102);
    s.insert(105);
    s.erase(100);
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}