// Swap
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector
using namespace std;
typedef long long ll;
void swap(ll &x, ll &y)
{
    ll temp=x;
    x=y;
    y=temp;
}
int main () {
  ll x,y;
  cin>>x>>y;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
}