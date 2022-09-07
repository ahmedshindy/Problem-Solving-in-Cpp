#include <iostream>
#include <string>

using namespace std;

int main () {

 int x; 
 cin>>x;
 int first;

while (x>=10)
{
x=x/10;}


first=x;

 if( first %2 )
    {
        cout<<"ODD"<<endl;
    }
    else 
    cout<<"EVEN"<<endl;

}
