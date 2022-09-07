#include <iostream>
#include <vector>
using namespace std;

void print(char symbole, int n)
{
    for (int i=0 ; i<n; i++)
        cout<<symbole;
}
int main()
{
    int N;
    cin>>N;
    char symbol='*';
    for(int i=N ; i>=1;  i-- )
    {
        print(symbol,i);
        cout<<"\n";
    }
    
}