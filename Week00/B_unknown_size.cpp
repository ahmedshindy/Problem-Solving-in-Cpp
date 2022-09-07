#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    int N_divisors=0,input;
    cin>>input;
    vector<int> divisors;
    for (int i=1 ; i<=input; i++)
    {
        if (!(input%i))
        {
            divisors.push_back(i);
            N_divisors++;
        }
    }

    cout<<N_divisors<<"\n";
    for (int i=0 ; i<N_divisors; i++)
    {
        cout<<divisors[i]<<" ";
    }
    cout<<"\n"; 
}