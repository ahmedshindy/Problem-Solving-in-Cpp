#include <iostream>
using namespace std;
typedef long long ll;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

bool isprime(ll N);
int main()
{
    init();
    long long N;f
    cin>>N;

    if(isprime(N)){
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";

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
   /* // evens are not primes
    else if(N%2 ==0){
        cout<<"NO\n";
        return 0;
    }
    else {
    for (int i=3 ; i<=N/2; i+=2)
    {
        if(N%i == 0)
        {
            cout<<"NO\n";
            return 0;
        }

    }
    }

    cout<<"YES\n";
}
// Time Limit exceeded

    /*
    // check odds grater than 10
    for (int i=11 ; i<N; i+=2)
    {
        if(N%i == 0)
        {
            cout<<"NO\n";
            return 0;
        }

    }*/