#include <iostream>
#include <stack>
#include <string>
using namespace std;

/*
int main()
{
 int q, x;
 string str; 
 stack <int> Stk;
 cin>>q; 
 
    for(int i=1 ; i<=q ; i++)
    {
        cin>>str;
        if(str =="push")
        {
            cin>>x; 
            Stk.push(x);
            continue;    
        }
        if(str=="pop")
        {
            Stk.pop();
            continue;
        }
        if(str=="top")
            cout<<Stk.top()<<endl;
  
    }

}
*/

// code 2: some optimization
int main()
{
 int q, x;
 string str; 
 stack <int> Stk;
 cin>>q; 
 
    for(int i=1 ; i<=q ; i++)
    {
        cin>>str;
        if(str =="push")
        {
            cin>>x; 
            Stk.push(x);
            continue;    
        }
        if(str=="pop")
        {
            Stk.pop();
            continue;
        }
        if(str=="top")
            cout<<Stk.top()<<endl;
  
    }

}