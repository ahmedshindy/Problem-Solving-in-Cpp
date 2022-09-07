#include <iostream>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(isupper(str[i]))
            str[i]=tolower(str[i]);
    }
    int z=int('z');
    int j=0;
    for(int i=int('a') ; i<=z; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i== int(str[j]))
                break;
        
            if(j==(n-1))
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
}
//steps
//1 convert str into lowecase 
//2 loop from a to z 
//      if char not found at least once -> cout"No"
//if not returned -> cout<<yes;
