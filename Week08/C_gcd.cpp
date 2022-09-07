#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    ll A,B;
    cin>>A>>B;
    long long gcd =__gcd(A,B);
    
    ll lcm=A/gcd;
    lcm*=B;
    cout<<gcd<<" "<<lcm<<"\n";
}