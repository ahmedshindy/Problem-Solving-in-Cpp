#include <iostream>
using namespace std;

int main()
{
    int A,B,counter,gcd;
    cin>>A>>B;
    if (A>B)
        counter=B;
    else 
        counter=A;
    
    for (int i=1; i<=counter; i++)
    {
        if( !(A%i) && !(B%i))
            gcd=i;
    }
    cout<<gcd<<"\n";
}