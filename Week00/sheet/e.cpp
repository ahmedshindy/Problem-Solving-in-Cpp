#include <iostream>
using namespace std;

int main() {
    int N=1000;
    cin>>N;

    int A[N];
    for (int i=0; i<N; i++ )
        cin>>A[i];
    
    int mx=A[0];
    for (int i=0; i<N; i++ )
    {
        if( A[i]> mx)
            mx=A[i];
    }
    cout<<mx<<endl;
}