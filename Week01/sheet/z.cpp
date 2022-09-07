#include <iostream>
#include <math.h>
 
using namespace std;
 
int main () {
 
long long a,b,c,d;
cin>>a>>b>>c>>d;
long long x=b*log(a);
long long y=d*log(c);

if(x>y)
    cout<<"YES\n";
    else
        cout<<"NO\n";
 
   return 0;
}