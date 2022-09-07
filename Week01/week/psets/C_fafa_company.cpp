// قم بتوزيع العمال ك مجموعات متساوية  لكل مجمموعة قائد , معطي عدد العمال 
// أوجد عدد طرق تكوين الفرق.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0, N_ways=0;

    if ((n-2)==0)
    {
        cout<<1<<endl;
        return 0;
    }
    // the remaining number shold be divided by l leaders
    for (int i=1 ; i<=(n/2); i++)
    {
        x=n-i;
        if(( !(x%i ==0) ) )
            continue;

        N_ways+=1;
    }
    cout<<N_ways<<endl;
}