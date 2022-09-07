
#include <iostream>
#include <set>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
	int t,n,k,m,j,c;
    cin>>t;
    cin>>n>>m>>k;
    int data[n];
    int i;
    priority_queue<int>s;

for(t; t>0; t--)
{
    for(i=0; i<n; i++)
        cin>>data[i];
        int end=n-m;
    for( i=0 ;i<=(end) ; i++)
    {
            // read element in a set or priority queue to be organized 
            for(j=i; j<i+m; j++)
                s.push(data[j]);
            // write them back into data array
            j--;
            while(!s.empty())
                   { data[j]=s.top(); j--; s.pop();}    
 
    }
    cout<<data[k-1]<<"\n";
}
}