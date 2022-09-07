#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
 
int a,b,c,d;
cin>>a>>b>>c>>d;

long long result=a%100;
result*=(b%100);
result = (result%100);
result*=(c%100);
result = (result%100);

cout<<result<<endl;
 
   return 0;
}