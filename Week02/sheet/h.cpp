#include <iostream>
using namespace std;
bool is_prime(int N);


int main() {
    int N=0;
    cin>>N;
    if(is_prime(N))
        cout<<"YES\n";
        else
            cout<<"NO\n";

}

bool is_prime(int N)
{
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