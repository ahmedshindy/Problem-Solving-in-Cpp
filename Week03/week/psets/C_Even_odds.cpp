#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);


   ll n,k,result;
   cin>>n>>k;
   if(n%2 ==0 )
   {
        if(k<= n/2)
        {
        result=1+(k-1)*2;
        } 
        else
            result=2+(k-1-n/2)*2; 
    }
    // odds formula
    if(n%2 )
   {
        if(k<= (n+1)/2)
        {
        result=1+(k-1)*2;
        } 
        else
            result=2+(k-1-(n+1)/2)*2;
        
    }

   std::cout<<result<<endl;

}