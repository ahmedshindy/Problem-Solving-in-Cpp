#include <iostream>
#include <string>
#include <deque>
using namespace std;
/*  WA3
int main()
{
std::string str;
std::getline(cin, str,'\n');
if(str.length() ==0)
{
    cout<<"yes\n";
    return 0;
}
if((str.length()%2)  == 0)
{
    cout<<"yes\n";
    return 0;
}
cout<<"no\n";
}
*/

int main()
{
    std::string str;
    std::getline(cin, str,'\n');

    // check for empty case
    int length=str.length();
    if(length ==0)
    {
        cout<<"yes\n";
        return 0;
    }
    // it should be even str otherwise no
    if((length%2))
    {
        cout<<"no\n";
        return 0;
    }
    int middle=length/2; 
    int j=length-1;
    for(int i=0; i<middle ; i++)
    {
        if(str[i] =='(')
        {   
            // str of j should be )
            if(str[j] ==')')
            {   j--;
                continue;
            }
        }

        if(str[i] ==')')
        {   
            // str of j should be (
            if(str[j] =='(')
            {   j--;
                continue;
            }
        }
        cout<<"no\n";
        return 0;
    }

    cout<<"yes\n";
}