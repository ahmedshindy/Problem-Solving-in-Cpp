#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int Data[n];
    ll sum=0;
    ll prefix_sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>Data[i];
        sum+=Data[i];
    }
    if(sum %2 != 0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n==2)
    {
        if(Data[0] == Data[1])
        cout<<1<<endl;
        return 0;
    }
    ll prefix_of_data[n];
    sum=sum/2;
    for(int i=0 ; i<n ;  i++ )
    {

        prefix_sum+=Data[i];
        prefix_of_data[i]=prefix_sum;
        if(prefix_of_data[i]==sum)
        {
            prefix_sum=0;
          
        }
    }
    int counter=0;
    // find how many times sum/2 is found in the prefix array
    for (int i=0 ; i<n; i++)
    {
        if(prefix_of_data[i]== sum)
        {
            counter++;
            i++;
        }
    }
    cout<<counter<<"\n";
}