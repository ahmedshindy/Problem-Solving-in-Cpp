#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int ABfound=s.find("AB");
    if(ABfound != string::npos)
    {
        //cout<<ABfound<<endl;
        s[ABfound]='0';
        s[ABfound+1]='0';
    }

    int BAfound=s.find("BA");
    if( (ABfound != string::npos) && (BAfound != string::npos) )
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
//WA17