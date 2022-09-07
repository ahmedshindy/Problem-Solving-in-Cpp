#include <iostream>
#include <cmath>
using namespace std;

int f(int a);

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N;
    
    cin>>N;
    cout<<f(N)<<endl;
}

int f(int a)
{    cin.tie(0);
    cin.sync_with_stdio(0);
int sum =0;
for (int i=1; i<=a; i++)
{
    sum+=pow(-1,i)*i;
}
return sum;
}
How )(this is my &¬!"£$££££$$$")


