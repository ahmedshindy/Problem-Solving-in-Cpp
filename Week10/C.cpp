
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
	priority_queue<int>Pq;
	string str;
	int q,x;
    cin>>q;
    for(int i=0; i<q; i++)
	{
        cin>>str;
	    if(str=="push")
	    {
            cin>>x;
            Pq.push(x);
            continue;
        }
	    else if(str=="pop")
        {
            Pq.pop();    
	    }
	    else
		{
            cout<<Pq.top()<<"\n";
		}
    }    
}

// TLE 2
// which is faser if else if chain or switch statement