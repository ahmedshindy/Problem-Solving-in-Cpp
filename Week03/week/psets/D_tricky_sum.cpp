#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll sum=0;
    double n;
    int t;
    cin>>t;
    int TestCases[t];
    for(int i=0 ; i<t ; i++)
    {
        cin>>TestCases[i];
    }

    for(int T=0 ;T<t; T++)
    {
        n=TestCases[T];
        sum=n*((1+n)/2);
        // if n is int you got wrong answer
        for(int i=1; i<=n; i*=2)
        {
            sum-=2*i;
        }
        cout<<sum<<"\n";
    }
}


// int/int gives you int so be careful

    /*
    int x=9*log2(10);

    ll powers_of_2[x+3];
    for(int i=0; i<(x+1); i++)
    {
        powers_of_2[i]=pow(2,i);
    }
    for(int x=0; x<t ; x++)
    {
    n=TestCases[x];
    int j=0;
    for(int i=0; i<=n; i++)
    {
        if(i == powers_of_2[j])
        {
            sum-=i;
            j++;
            continue;
        }
        sum+=i;
    }
    cout<<sum<<"\n";
    }
}
*/