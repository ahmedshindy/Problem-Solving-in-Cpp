#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    int N=n;
    if(n <2 )
      {
    if(n==0)
        cout<<0<<" "<<0<<" "<<0<<"\n";
    if(n==1)
        cout<<1<<" "<<0<<" "<<0<<"\n";
        return 0;
    }

    if(N > 20)
        N=N/2;

    int fib_seq[N+10];
    fib_seq[0]=0;
    fib_seq[1]=1;
    
    for(int i=2; i<(N+10); i++)
    {
        fib_seq[i]=fib_seq[i-1]+fib_seq[i-2];
    }

    for(int i=2; i<(N+10); i++)
    {
        if(fib_seq[i]==n)
        {
            cout<<0<<" "<<fib_seq[i-1]<< " " << fib_seq[i-2]<<"\n";
            return 0;
        }
    }
    

}

// memory limit exceeded on test 47