#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
 
long long l1, l2 , r1 , r2;
cin>>l1>>r1>>l2>>r2;

if((l1<l2 )&& (r1<r2) && (l2<r1))
{
    cout<<l2<<" "<<r1<<endl;    return 0;
}
   else if((l1==l2) && (r1==r2) )
   {    
       if( (r2-l2) != 0 )
       {
       cout<<l2<<" "<<r2<<endl;    return 0;
       }
       
   }
   else if((l1>l2)  && (r1>r2) && (r2>l1))
   {    cout<<l1<<" "<<r2<<endl;    return 0;}
   else
   cout<<-1<<endl;
 
   return 0;
}