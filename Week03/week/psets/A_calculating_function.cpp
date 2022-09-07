#include <iostream>
#include <cmath>
using namespace std;

int f(int a);

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    long long  N,result;
    
    cin>>N;
    if(!(N%2)){
        result=N/2;
        cout<<result<<endl;
        return 0;
    }
    result=(N-1)/2;
    result-=N;
    cout<<result<<endl;
}
