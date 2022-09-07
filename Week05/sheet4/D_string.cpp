#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string s,t;
    cin>>s;
    cin>>t;
    cout<<s.length()<<" "<<t.length()<<endl;
    cout<<s+t<<"\n";
    char temp=s[0];
    s[0]=t[0];
    t[0]=temp;
    cout<<s<<" "<<t<<"\n";
}

