#include <iostream>
#include <vector>
using namespace std;

typedef long long int ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

bool isprime(ll N);

int main()
{
    int N;
    cin>>N;
    int n=N;
    vector<int> primes;
    for(int i=2 ; i <N; i++)
    {
        if(isprime(i))
        {
            //add it to array of primes
            primes.push_back(i);
        }
    }
    int prime_counter=0;
    for(int i=0; i<primes.size(); i++)
    {
        while( n%primes[i] ==0)
        {
            prime_counter++;
            n=n/primes[i];
            
        }
        if(prime_counter ==0 )
            break;
        cout<<primes[i]<<" "<<prime_counter<<"\n";
        prime_counter=0;
        n=N;
    }
}


bool isprime(ll N){
    init();
    if(N==2 )
        return true;
    if(N<2 || N%2 ==0 ) 
        return false;

    for (ll i=3; i*i <=N; i+=2){
        if(N%i == 0)
            return false;
    }
    return true;
}   