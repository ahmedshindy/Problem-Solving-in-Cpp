#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int convert_into_value;
    if(n==1)
    {
        cout<<"Yes"<<endl;
        return 0 ;
    }
    int X[n];
    // convert string into array and find availabel conversions(array)
    for(int i=0; i<n; i++)
    {
        X[i]=int(s[i]);
    }
    // sort array
    //O(nlogn )
    sort(X, X+n);
    //loop array and if 2 consecutive elements are equal print yes
    //else print No 
    // O(n)
    for(int i=0; i<(n-1); i++)
    {
        if(X[i]==X[i+1])
            {
                cout<<"Yes\n";
                return 0;
            }
    }
    cout<<"No\n";
}
/*
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int convert_into_value;

    int X[n];
    // convert string into array and find availabel conversions(array)
    for(int i=0; i<n; i++)
    {
        X[i]=int(s[i]);
    }
    // sort array
    sort(X, X+n);
    //loop array and if 2 consecutive elements are equal print yes
    //else print No
    for(int i=0; i<(n-1); i++)
    {
        if(X[i]==X[i+1])
            {
                cout<<"Yes\n";
                return 0;
            }
    }
    cout<<"No\n";
}
*/
/*
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int convert_into_value;

    int X[n];
    // convert string into array and find availabel conversions(array)
    for(int i=0; i<n; i++)
    {
        X[i]=int(s[i]);
    }
    int available_conversions[n];
    for(int i=1; i<n; i++)
    {
        available_conversions[i]=X[i];
    }

    for(int i=1; i<n; i++)
    {
        if(X[i]==X[i+1])
            {
                //remove X[i] from availabel conversions 
                for(int j=1; j<n; j++)
                {
                    if(available_conversions[j]==X[i])
                    {
                        available_conversions[j]=0;
                    }
                }

                // convert all elements in x that equals X[i] into the first availabe 
                // number in available conversions
                for(int j=1; j<n; j++)
                {
                    if(available_conversions[j]!=0)
                    {
                        convert_into_value=available_conversions[j];
                    }
                }
                // convert basic array
                for(int j=1; j<n; j++)
                {
                    if(X[j]==X[i])
                    {
                        X[j]=convert_into_value;
                    }
                }
                //start from begining once more i=0
                if(available_conversions[n-1]==0)
                {
                    break;
                }
                i=0;
            }
    }

}
// sort Array X
*/