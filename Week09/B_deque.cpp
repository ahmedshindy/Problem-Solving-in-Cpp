

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
 int q, x;
 string str; 
 deque <int> deq;
 cin>>q; 
 
    for(int i=1 ; i<=q ; i++)
    {
        cin>>str;
        if(str =="push_back")
        {
            cin>>x; 
            deq.push_back(x);
            continue;    
        }
        if(str =="push_front")
        {
            cin>>x; 
            deq.push_front(x);
            continue;    
        }
        if(str=="pop_front")
        {
            deq.pop_front();
            continue;
        }
        if(str=="pop_back")
        {
            deq.pop_back();
            continue;
        }
        if(str=="front")
        {cout<<deq.front()<<endl;
            continue;
        }
        if(str=="back")
        {
            cout<<deq.back()<<endl;
            
        }
        if(str == "print")
        {
            cin>>x;
            cout<<deq[x-1]<<endl;
        }
  
    }

}

// Which is better if blocks with continue or if else if blocks
