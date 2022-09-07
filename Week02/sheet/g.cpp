#include <iostream>
using namespace std;

void print_fact_to_console (int i);
int main() {
    int T,N;
    cin>>T;
    for (int c=0; c<T; c++)
    {
        cin>>N;
        print_fact_to_console(N);
    }
}

void print_fact_to_console (int i)
{
    long long  ans=1;
    if( (i==0)  | (i==1)) 
    {
        cout<<1<<endl;
        return ;
    }
    else
    {
            for (int j=1; j<=i ; j++)
            ans*=j;
        }
    
        cout<<ans<<endl;
}