#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    int item;

    int x_on_table=0, max_x_on_table=0;
    cin>>n;
   set<int>s;
    for (int i=0 ; i<(2*n) ; i++)
    {
        cin>>item;
        if(s.find(item) != s.end())
        {
            x_on_table--;
            s.erase(item);
        }
        else
        {
            s.insert(item); 
            x_on_table++;
        } 
        if(max_x_on_table < x_on_table)
            max_x_on_table=x_on_table;
    }
    cout<<max_x_on_table<<endl;

}

/*
int main()
{
    int n;
    int x_on_table=0, max_x_on_table=0;
    cin>>n;
    int X[2*n];
    for (int i=0 ; i<(2*n) ; i++)
    {
        cin>>X[i];
    }

    x_on_table=1;
    max_x_on_table=1;
    for(int i=1; i<2*n; i++)
    {
        
        for(int j=(i-1); j>=0; j--)
        {

            //fing similar sock if found remove it else
            // put it on table x_on_table++
            if(X[j]==X[i])
            {
                x_on_table--;
                break;
            }
            if(j==0)
            {
                x_on_table++;
            }     
        }
        if(max_x_on_table<x_on_table)
            {
                max_x_on_table=x_on_table;
            }
    }
    cout<<max_x_on_table<<"\n";
    WA
}
*/