#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;
    int i=1;
    while (i <= 12)
        {
            cout<<N<<" * "<<i<<" = "<<(i*N)<<endl;
            i++;
        }
}
