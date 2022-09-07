#include <iostream>
#include <string>
void Print(std::string x);
using namespace std;
int main()
{
    int x;
    cin>>x;
    string Array[x];

    for(int i=0; i<x; i++ )
    {
        cin>>Array[i];
    }

    for(int i=0; i<x; i++ )
    {
        Print(Array[i]);
    }
}


void Print(std::string x)
{
        string S=x;

    int len=S.size();
    if(len<=10)
    {
        cout<<S<<"\n";
        return ;
    }
    else 
    {
        string Sub_str=S.substr(2,len-1);
        string A=to_string(Sub_str.length());
        string out=S[0]+A+S[len-1];
        cout<<out<<"\n";
    }
}