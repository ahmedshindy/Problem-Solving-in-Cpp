

/*#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

int N;
cin>>N;
int A[N];
int min=10^6, max=1;
for (int i=0; i<N; i++)
{
    cin>>A[i];
    if(min>A[i];
    	min=A[i];
    else if (max<A[i])
    	max=A[i];
    
}

sort(A, A+N);
int val=A[0]+A[N-1];
int number_of_pairs=0;
int middle=N/2 +1;
for (int i=0; i<=middle; i++)
{

    for(int j=i; j<N; j++)
    {
        if(i==j)
            continue;
        if(A[i]+A[j] == val)
            number_of_pairs++;
    }
    }
    cout<<number_of_pairs<<"\n";
}
*/
// solution2 not verified yet
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

int N;
cin>>N;
int A[N];
int min=10^6, max=1;
for (int i=0; i<N; i++)
{
    cin>>A[i];
    if(min>A[i];
    	min=A[i];
    else if (max<A[i])
    	max=A[i];
    
}

int sum=min+max;
int number_of_pairs=0;
// do prefix array
int prefix_array[max]={0};

for (int i=0; i<N; i++)
{
frequency_array[A[i]]++;
}

// test code 
/*
for (int i=0; i<N; i++)
{
cout<<frequency_array[i]<<" " <<endl;
}
return 0;
*/
int val, middle=N/2;
for (int i=0; i<middle; i++)
{
val=sum-A[i];
// ask frequency array if it has the val 
if(frequency_array[val]==1)
{
number_of_pairs++;
}
}
 }
    cout<<number_of_pairs<<"\n";
}
