#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{   ll product=1;
    int L, R,M;
    cin>>L>>R>>M;
    for (int i=L; i<=R; i++)
    {
        product*=i;
        product=product%M;
    }
   product= product%M;
   cout<<product<<"\n";

}

// not understood