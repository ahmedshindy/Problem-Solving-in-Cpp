// count the pairs
#include <iostream>
using namespace std;


int findmin(int Array[], int N); // o(n)
int findmax(int Array[], int N);  // O(n)

int main()
{

    int N,max,min, val, number_of_pairs=0,y;
    cin>>N;
    int a[N];

    //Read input Array of size N
    for (int i=0; i<N; i++)
        cin>>a[i];

    // val=min(a)+max(a)
    min =findmin(a,N);
    max = findmax(a,N);
    val=min+max;

    
    for(int i=0 ; i<N ; i++ )
    {
        for(int j=0 ; j<N; j++)
        {
            if(i==j)
                continue;

            y=a[i]+a[j];
            if(y == val)
            {
                    number_of_pairs+=1;
            }
        }
        //   حالة التصفير هذه لا تسمح لك باعتبار كل (5و4) مختلف عن 4 و 5
        a[i]=0;
    }

    cout<<number_of_pairs<<endl;
}


int findmin(int Array[],int  N)
{
    int x=Array[0];
    for (int i=0 ; i<N ; i++ )
    {
        if (x>Array[i])
            x=Array[i];
    }
    return x;
}

int findmax(int Array[],int N)
{
    int x=Array[0];
    for (int i=0 ; i<N ; i++ )
    {
        if (x<Array[i])
            x=Array[i];
    }
    return x;
}