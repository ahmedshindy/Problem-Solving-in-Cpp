
#include <iostream>
#include <deque>
#include <stack>
#include <string>
using namespace std;

int main()
{
 int q, x;
 int size;
 string str; 
 stack <int>s;
 deque <int> deq;
 cin>>q; 
 
    for(int i=1 ; i<=q ; i++)
    {
        cin>>str;


            if(str =="back" && !deq.empty())
            {
                cout<<deq.back()<<"\n";
                deq.pop_back();
                  
            }
            else if(str =="front" && !deq.empty())
            {
                
                cout<<deq.front()<<"\n";
                deq.pop_front();
                  
            }
            else if(str=="reverse")
            {

                    while(!deq.empty())
                    {
                        s.push(deq.front());
                        deq.pop_front();
                    }
                    while(!s.empty())
                    {                    
                        deq.push_back(s.top());
                        s.pop();
                    }
                
                
            }
            else if(str=="push_back")
            {
                cin>>x;
                deq.push_back(x);
                
            }
            else if(str=="toFront")
            {
                cin>>x;
                deq.push_front(x);    
            }
        
        else {cout<<"No job for Ada?\n";}
 
    }

}
