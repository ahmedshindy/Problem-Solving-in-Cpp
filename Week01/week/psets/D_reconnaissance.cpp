// لديك عدة جنود , اوجد طرق تكوين فريق مكون من جنديان بحيث
// فرق الطول لا يتعدي مسافة معطاه d
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int n,d,x, N_ways=0;
    cin>>n>>d;
    int Heights[n];
    for (int i=0; i<n; i++ )
        cin>>Heights[i];

    for (int i=0; i<n; i++ )
    {
        x=Heights[i];
        
        for (int j=0; j<n; j++)
        {
            if (j==i)
                continue;
            
            if( absol(x-Heights[j]) <=d )
                N_ways++;
            
        }

    }

    cout<<N_ways<<endl;

}

