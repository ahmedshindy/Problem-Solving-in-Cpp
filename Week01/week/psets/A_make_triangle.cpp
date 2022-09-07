#include <iostream>
using namespace std;

int main()
{
    int a,b,c,mx=0,N_minutes=0;
    cin>>a>>b>>c;
    if(a>b)
        mx=a;
    else
        mx=b;
    
    if(mx>c)
        mx=mx;
    else
        mx=c;
while(mx>=(a+b+c-mx))
    {
        a++;
        N_minutes++;
    }
    cout<<N_minutes<<"\n";
    

}