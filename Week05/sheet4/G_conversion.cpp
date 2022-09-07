#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string s;
    getline(cin, s,'\n');
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
            continue;
        }    
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
            continue;
        }
        else 
            s[i]=' ';
    }
    cout<<s<<endl;

}

