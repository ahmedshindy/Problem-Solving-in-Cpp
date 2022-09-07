// قم بإيجاد أقل سعر للتفاح عند توفر عدة محلات سوبرماركت
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0;

    double a,b,m=0;
    double sm_a_b_ratio, cost;
    cin>>n>>m;

    int Data[n][2];
    for(int i=0; i<n; i++)
    {
        // thet for loop could be ignored 
        for(int j=0; j<2; j++)
        {
            cin>>Data[i][j];
        }
    }

    a=(double)Data[0][0];
    b=(double)Data[0][1];
    sm_a_b_ratio=a/b;



    // find smaller a,b ratio in all 2D Data Array by linear search

    for (int i=0 ;i<n ; i++ )
    {
        a=(double)Data[i][0];
        b=(double)Data[i][1];
        if( (a/b)<sm_a_b_ratio )
            sm_a_b_ratio=(a/b);
    }
    
    cost=m*sm_a_b_ratio;
    cout<<fixed<<setprecision(8)<<cost<<"\n";


    return 0;
}
