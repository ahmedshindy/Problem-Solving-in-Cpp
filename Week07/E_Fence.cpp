#include <iostream>

using namespace std;

int main()
{
    int n, k, j=0, index=0; 
    long long sum=0;
    cin>>n>>k;
    int H[n];
    long long frequency_sum[n]={0};
    for (int i=0; i<n; i++)
    {
        cin>>H[i];
        if(j<3)
        {
            sum+=H[i];
            j++;
        }
        else
        {
            frequency_sum[index]= sum;
            index++;
            sum=0;
            j=1;
            sum+=H[i];
        }
    }

    // loop frequency_sum of its minumum.
}

int main2()
{


    int n, k, min,sum,index=0;
    cin>>n>>k;
    int h[n];
    for (int i=0; i<n; i++)
    {
        cin>>h[i];
    }

    for (int i=0; i<k; i++)
    {
        sum+=h[i]; 
    }
    
    min=sum;

    for(int i=0; i<=(n-k); i++)
    {
        sum=0;
        for (int j=i; j<(k+i); j++)
        {
            sum+=h[j]; 
        }
        if(sum<min)
        {
            min=sum;
            index=i;
        }
    }
    cout<<(index+1)<<"\n";
}