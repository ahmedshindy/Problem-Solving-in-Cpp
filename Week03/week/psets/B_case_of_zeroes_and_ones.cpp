#include <iostream>
#include <string>
using namespace std;

int f(int a);

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, sum=0;
    string str;
    cin>>n;
    cin>>str;
    int val;
    for(int i=0; i<n; i++)
    {
        val=str[i]-'0';
        if(val)
        {
            sum+=1;
            continue;
        }
        sum-=1;
    }
    if(sum<0)
    sum*=-1;
    cout<<sum<<"\n";
  }
  /*  int n, result=0;
    string str;
    cin>>n;
    cin>>str;
    int index;

    while(str.find("01") != string::npos)
    {
        index =str.find("01");
        str[index]=str[index+1]='a';
    }    

    while(str.find("10") != string::npos)
    {
        index =str.find("01");
        str[index]=str[index+1]='a';
    } 

    for(int i=0; i<n; i++ )
    {
        if(str[i]== '0')
        result++;
    }
    
    for(int i=0; i<n; i++ )
    {
        if(str[i]== '1')
        result++;
    }
    cout<<result<<endl;
}
*/