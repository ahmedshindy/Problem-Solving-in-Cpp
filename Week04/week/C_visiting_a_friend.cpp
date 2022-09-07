#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int m,n;
    cin>>n>>m;
    int teledata[n][2];
    for (int i=0; i<n; i++)
    { 
        cin>>teledata[i][0];
        cin>>teledata[i][1];

    }

    if(teledata[0][0] > 0)
    {
        cout<<"NO\n";
        return 0;

    }
    int current_pos=teledata[0][1], begin,end;
    for (int i=0; i<n; i++)
    {
        begin=teledata[i][0];
        end=teledata[i][1];
        if( current_pos >= begin && current_pos <end)
            current_pos=end;
    }
    
    if(current_pos >= m)
    {
        cout<<"yes\n";
        return 0;
    }
    cout<<"no\n";

}
/*
    // find max end along the way 
    int max=teledata[0][1];
    for (int i=1; i<n; i++)
    {
        if(teledata[i][1]> max)
            max=teledata[i][1];

        // make sure ther is no gaps between beginings
        if(teledata[i-1][1] < teledata[i][0])
        {
        cout<<"NO\n";
        return 0;
        }
    }
    if(max < m)
    {
        cout<<"NO\n";
        return 0;
        
    }

    cout<<"YES\n";
}
// if there is no gaps between telegraphs and the begining is 0
//  and the last destination is in the last one's range then ok
/*
3 5
0 2
2 4
3 5
*/
