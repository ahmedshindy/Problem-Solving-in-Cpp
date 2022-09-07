#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n;
    cin>>n;
    int data[n];
    for(int i=0; i<n; i++)
    {
        cin>>data[i];
    }
    int m;
    cin>>m;
    int queries[m][3];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<3 ; j++)
        cin>>queries[i][j];
    }
    // find prefix sum "overflow could happen if n is too big"
    ll prefix_sum[n];
    ll prefix_sum_of_sorted_data[n];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=data[i];
        prefix_sum[i]=sum;
    }
    // find sorted array
    int l,r;
    ll ans;
    sort(data, data+n);
    //find prefix sum of sorted data
    sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=data[i];
        prefix_sum_of_sorted_data[i]=sum;
    }
    for(int i=0; i<m; i++)
    {
        if(queries[i][0] == 1)
        {
            // answer the first question and go next
            l=queries[i][1]-1;
            r=queries[i][2]-1;
            if(l<=0)
            {
            ans=prefix_sum[r];
            cout<<ans<<"\n";
            continue;
            }
            ans=prefix_sum[r]-prefix_sum[l-1];
            cout<<ans<<"\n";

            continue;
        }
        // answer the 2nd question
            l=queries[i][1]-1;
            r=queries[i][2]-1;
            if(l<=0)
            {
            ans=prefix_sum_of_sorted_data[r];
            cout<<ans<<"\n";
            continue;
            }
            ans=prefix_sum_of_sorted_data[r]-prefix_sum_of_sorted_data[l-1];
            cout<<ans<<"\n";

    }

}