#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
 
char x;
cin>>x;
if(isupper(x))
{
    cout<<(char)tolower(x)<<endl;
    return 0;
}
else
    cout<<(char)toupper(x)<<endl;
   return 0;
}