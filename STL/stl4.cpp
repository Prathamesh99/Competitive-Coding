//IMPLEMENTATION OF STACK AND QUEUE
#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include<vector>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        //cout<<q.back()<<endl;
        q.pop();
    }
    return 0;
}