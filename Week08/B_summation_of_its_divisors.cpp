#include <iostream>
#include <cmath>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    long long N,sum=0,Pair_divisor=0;
    cin>>N;
    int center=sqrt(N);
    cout<<center<<endl;
    return 0;
    if(!(N%(int)center))
        sum+=center;
    for ( long long i=1; i<center; i++)
        if(!(N%i)){
            sum+=i;
            Pair_divisor=N/i;
            sum+=Pair_divisor;

        }

    cout<<sum<<"\n";
}

    /* Wrong Algorithm
    if(even)
    {
        //check for evens only
        sum+=1;
        for (int i=2; i<=N; i+=2)
        {   
        
            bool divisor=N%i;
            if(!divisor)
                sum+=i;
        }
    }

    else if(!even)
    {
        // check for odd divisors
        for (int i=1; i<=N; i+=2)
        {
            bool divisor2=N%i;
            if(!divisor2)
            //if(N%i ==0 )
                sum+=i;
        }
    }


    cout<<sum<<"\n";

}
// why that error*/