#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    list<int> l;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(4);
    v.push_back(50);
    v.push_back(50);
    v.push_back(50);
    l.push_back(10);
    l.push_back(20);
    l.push_back(40);
    l.push_back(50);
    l.push_back(4);
    std::remove_if(v.begin(), v.end(),[](int val){
        if(val==40)
            return true;
        return false;
    });
    vector<int>::iterator itr1 = v.begin();
    list<int>::iterator itr2 = l.begin();
    for(;itr1!=v.end();itr1++)
    {
        cout<<*itr1<<endl;
    }
    for(;itr2!=l.end();itr2++)
    {
        cout<<*itr2<<endl;
    }
    return 0;


}

