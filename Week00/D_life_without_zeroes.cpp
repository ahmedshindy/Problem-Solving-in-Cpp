#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

int without_zeroes(int x);

int main()
{   //a,b,c  and A B C
    int a,b,c,A,B,C;
    cin>>a;
    cin>>b;
    c=a+b;

    A=without_zeroes(a);
    B=without_zeroes(b);
    C=A+B;

    if( C==without_zeroes(c))
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}


int without_zeroes(int x)
{
    int rem,X=0;
    vector<int>v;

    while(x>0)
    {
        rem=x%10;
        

        if(rem==0)
        {
            x=x/10;
            continue;
        }
        
        v.push_back(rem);
        x=(x-rem);      
    }

    for(int i=0; i<v.size(); i++)
    {
        X+=(v[i]*pow(10,i));
    }
    
    return X;
}