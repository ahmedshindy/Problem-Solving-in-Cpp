#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   cin>>s;
    int size=s.size();
    int j=size-1;

    for(int i=0; i<size/2; i++)
    {
            if(s[i] != s[j])
            {
                    cout<<"NO\n";
                    return 0;
            }
            j--;
    } 
   cout<<"YES\n"; 
}
//smart O(n) !