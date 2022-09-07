#include <iostream>
using namespace std;

int main() {
    int N=0;
    cin>>N;
    if(N==1)
        cout<<-1<<"\n";


    for (int i=1 ; i<=N ; i++)
        {   
            if(i%2 == 0)
                cout<<i<<"\n";
                
        
        }
}
