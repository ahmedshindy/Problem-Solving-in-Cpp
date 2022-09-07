#include <iostream>
#include <string>
using namespace std;

void i_love_s(std::string S, std::string T);
int main()
{
    int n;
    cin>>n;
    string Data[2*n];
    for(int i=0; i<2*n; i+=2)
        cin>>Data[i]>>Data[i+1];
    
    for(int i=0; i<2*n; i+=2)
        i_love_s(Data[i],Data[i+1]);
}

void i_love_s(std::string S, std::string T)
{
    int s_len=S.length();
    int t_len=T.length();
    int iterator =s_len>t_len? t_len:s_len;

    string new_string;
    for(int i=0; i<iterator ; i++)
    {
        new_string +=S[i];
        new_string+=T[i];
    }

    if(s_len>t_len)
    {
        new_string+=S.substr(iterator,s_len);
    }
    else if(s_len<t_len)
    {
        new_string+=T.substr(iterator,t_len);
    }
    cout<<new_string<<"\n";

}

//str.substr(begin,end); not substr[begin,end];