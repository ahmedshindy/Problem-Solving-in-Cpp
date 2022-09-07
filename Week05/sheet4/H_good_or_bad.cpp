#include <iostream>
#include <string>
using namespace std;

void check_each(std::string x);
string str1="010", str2="101";
int main()
{
    int T,str1_found, str2_found;
    cin>>T;
    // Read test cases T in an array of string Str[T]
    string Str[T];
    for (int i=0; i<T ; i++)
    {
        cin>>Str[i];
    }

    for (int i=0; i<T ; i++)
    {
        str1_found= Str[i].find(str1);
        if(str1_found !=string::npos)
        {
            cout<<"Good\n";
            continue;
        }
        str2_found= Str[i].find(str2);
        if(str2_found !=string::npos)
        {
            cout<<"Good\n";
            continue;
        }
        cout<<"Bad\n";
    }
}


/* Time Limit Exceeded Hint->: use find
void check_each(std::string x)
{
    for (int i=0; i<(x.length()-3); i++)
    {
        string test=x.substr(i,i+3);
        if( (test== str1) || (test==str2) )
        {
            cout<<"Good\n";
            return ;
        }
    }
    cout<<"Bad\n";

}
*/

/*Unable to open 'exit.c': Unable to read file 
'/build/glibc-eX1tMB/glibc-2.31/stdlib/exit.c' 
(Error: Unable to resolve non-existing 
file '/build/glibc-eX1tMB/glibc-2.31/stdlib/exit.c').*/
