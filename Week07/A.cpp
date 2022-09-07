#include <iostream>
using namespace std;

int main()
{
   int n, max_N=0;
   long long sum;
   int prefix_pair[50]={0};
   cin>>n;
   int Data[n]; 
   for(int i=0; i<n; i++ )
        cin>>Data[i];


       for(int i=0; i<n; i++ )
       {
           sum=Data[i];
           for(int j=i; j<n; j++)
           {
               if(j==i) continue;
               sum=+=Data[j];
           }
           prefix_pair[sum]+=1;
       }

   for(int i=0; i<n; i++ )
    if(max_N < prefix_pair[i])
        max_N=prefix_pair[i];
}