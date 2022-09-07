// Print
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector
using namespace std;
typedef long long ll;
void print(int n)
{
    for(int i=1; i<n; i++)
    cout<<i<<" ";
    cout<<n<<endl;
}
int main () {
    int n;
    cin>>n;
    print(n);

}