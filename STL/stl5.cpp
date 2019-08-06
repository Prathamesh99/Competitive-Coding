#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stack<char> s;
    char x;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
            s.push(str[i]);
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==')')
        {
            x = s.top();
            s.pop();
            if(x=='(' && !s.empty())
            {
                count+=1;
            }
            else
            {
                count=0;
            }
            
        }
    }
    if(count==0)
        cout<<"Not Balanced"<<endl;
    else
        cout<<"Balanced"<<endl;
    return 0;
}