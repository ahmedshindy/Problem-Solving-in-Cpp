
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
	set<int>s;
	string str;
	int q,x;
	cin>>q;
    set<int> :: iterator it;
    set<int> :: iterator index;

    for(int i=0 ; i<q ; i++)
	{
		cin>>str;
		if(str=="insert")
		{
            cin>>x;
            s.insert(x);
        }
		else if(str=="find")
		{   
            cin>>x;
			if(s.find(x) != s.end())
				cout<<"found\n";
			else cout<<"not found"<<endl;
		}


		else if(str=="lower_bound")
		{
            cin>>x;
            index=s.end();
            for(it = s.begin(); it != s.end() ;   it++)
		    {
                if (*it <= x) index =it;
                else if (*it>x) break;
            }

            if(index != s.end())
                cout<<*index<<endl;
                else 
                    cout<<-1<<endl;
		}

        // first element > x
		else if(str=="upper_bound")
		{
            cin>>x;
            for(it = s.begin(); it != s.end();   it++)
		    {
                if(*it > x)
                {
                    cout<<*it<<endl;
                    break;
                }
            }
            if(it==s.end()) cout<<-1<<endl;
		}

	}

}