// Cards 
//RTE4
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
 

    for(int i=1 ; i<=t ; i++)
    {
        deque <int> deq;
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            deq.push_front(j);
        }

        while( deq.size() !=2)
        {
            cout<<deq.back()<<" ";
            deq.pop_back();
            deq.push_front(deq.back());
            deq.pop_back();
        }
        cout<<deq.back()<<"\n";
        cout<<deq.front()<<"\n";
    }
}