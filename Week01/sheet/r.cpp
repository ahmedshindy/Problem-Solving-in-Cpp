#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
 
int N, y=0, m=0, d=0;
cin>>N;
while(N>=365)
    {
        N-=365;
        y++;
    }
while(N>=30)
    {
        N-=30;
        m++;
    }
while(N>0)
    {
        N-=1;
       d++;
    }
    cout<<y<<" years\n";
    cout<<m<<" months\n";
    cout<<d<<" days\n";

   return 0;
}