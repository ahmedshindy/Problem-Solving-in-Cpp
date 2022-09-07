#include <iostream>
using namespace std;

int main() {
    int N=0, N_enen=0, N_odd=0, Npos=0, Nneg=0;
    cin>>N;
    int A[N];
    
    for (int i=0; i<N; i++)
        cin>>A[i];
        
    for (int i=0; i<N; i++)
        {
            if(A[i]%2 ==0)
                N_enen++;
            else 
                N_odd++;
            
            if(A[i]>0)
                Npos++;
            else if( A[i]<0)
                Nneg++;
        }

    cout<<"Even: "<<N_enen<<"\n";
    cout<<"Odd: "<<N_odd<<"\n";
    cout<<"Positive: "<<Npos<<"\n";
    cout<<"Negative: "<<Nneg<<"\n";

}
