#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	set<int>s;
	string str;
	int q,x;
	cin>>q;
	while(q>0)
	{
		cin>>str;
		cin>>x;
		if(str=="insert")
			s.insert(x);
		else if(str=="find")
		{
				if(s.find(x) != s.end())
					cout<<"found\n";
				else cout<<-1<<endl;
		}
		else if(str=="lower_bound")
		{

		}
		else if(str=="upper_bound")
		{

		}
		else
		{
			cout<<-1<<endl;
		}



		q--;
	}

}
