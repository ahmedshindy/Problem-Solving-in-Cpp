#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main () {
 
int a,b,c;
int data[3];
cin>>a>>b>>c;
data[0]=a;
data[1]=b;
data[2]=c;
sort(data, data+3);
cout<<data[0]<<endl;
cout<<data[1]<<endl;
cout<<data[2]<<endl;

cout<<"\n"<<a<<endl<<b<<endl<<c<<endl;
   return 0;
}