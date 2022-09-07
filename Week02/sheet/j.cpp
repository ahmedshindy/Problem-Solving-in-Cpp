#include <iostream>
using namespace std;

bool is_prime(int x);

int main()
{
    int N;
    cin>>N;

    for (int i=2 ; i<=N; i++)
    {
        if(is_prime(i))
            cout<<i<<" ";
    }
    cout<<endl;

}

bool is_prime(int N)
{
    if(N <=1 )
        return false;
        
    for (int i=2; i*i <=N; i++)
    {
        if(i==N)
            continue;

        if(!(N%i))
        {
            return false;
        }
    }
    return true;
}