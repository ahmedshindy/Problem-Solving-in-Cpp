#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    int max;
    cin>>n;
    int data[n];
    int outputdata[n];

     
    for(int i=0; i<n; i++)
    {
        cin>>data[i];
    }   
    for(int i=n-1; i>=0; i--)
    {
        if(i==(n-1))
        {
            outputdata[i]=0;
            max=data[i];
            continue ;
        }
        if(max >= data[i])
        {
            outputdata[i]=max-data[i]+1;
            continue ;
        }
        if(max<data[i])
        {
            outputdata[i]=0;
            max=data[i];
        }
    }

    for(int i=0; i<n-1; i++)
    {

        cout<<outputdata[i]<<" ";

    }
    cout<<outputdata[n-1]<<endl;

    
}