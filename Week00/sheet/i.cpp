#include <iostream>
#include <string>
using namespace std;

int main()
{
string in;
cin>>in;

int size_=in.size();
int j=size_-1;
bool leading_zeors=1;
if(size_ ==1 )
{
    cout<<in<<"YES\n";
    return 0;
}
for(int i=0; i<size_/2; i++)
{
if(in[i] != in[j])
    {
        for(int x=size_ -1; x>=0; x--)
        {
            if((in[x]=='0') && leading_zeors)
            { 
                continue; 
            }
            leading_zeors =0;

            cout<<in[x];
        }
        cout<<"\n";

        cout<<"NO"<<endl; 
        return  0;
    }
j--;
}
cout<<in<<endl<<"YES\n";

}