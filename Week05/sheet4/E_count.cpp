#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string s;
    int sum=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        sum+=(int)(s[i]-'0');
    }
    cout<<sum<<endl;
}
//why subtracting 0 ?