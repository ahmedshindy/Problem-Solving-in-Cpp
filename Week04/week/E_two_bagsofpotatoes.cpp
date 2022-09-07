#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int y,n,k;
    cin>>y>>k>>n;

    int sum;
    int first_value=0;
    int x=1;
    for( x=1; x<=k; x++)
    {
        
        sum=x+y;
        if(sum>n)
            break;
        if( !(sum%k))
        {
            cout<<x;
            first_value++;        
            x+=k;
            break;
            
        }


    }
    if(first_value==0)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for( x; (x+y)<=n; x+=k)
    {
        cout<<" "<<x;
    }


    cout<<"\n";
}
/*
int main()
{
    int y,n,k;
    cin>>y>>k>>n;
    //int X_arr[n/k +100]={0};
    //int j=0;
    int sum;
    int first_value=0;
    for(int x=1; (x+y) <=n; x++)
    {
        
        sum=x+y;
        if( !(sum%k))
        {
          //  X_arr[j]=x;
            if(first_value==0)
            {
                    cout<<x;
                    first_value++;
                    
                    x+=k-1;

                    continue;
            }
            cout<<" "<<x;
            x+=k-1;
        }
    }
    if(first_value==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<"\n";
    /*for(int J=0; J<j-1; J++)
    {
        cout<<X_arr[J]<<" ";
    }
    cout<<X_arr[j-1]<<endl; */


//WA3
//TLE on test 30 because of 2 loops
// use github for multi versions of code