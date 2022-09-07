#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin>>S;
    string letters="abcdefghijklmnopqrstuvwxyz";
    int letter_counts[26];
    for (int i=0;i<26; i++)
    {
        letter_counts[i]=0;
    }

    for (int i=0;i<26; i++)
    {
        for(int j=0; j<S.length(); j++)
        {
            if(letters[i]==S[j])
            {
                letter_counts[i]+=1;
            }
        }
    }

    for (int i=0;i<26; i++)
    {
        if(letter_counts[i]==0)
            continue;
        cout<<letters[i]<<" : "<<letter_counts[i]<<"\n";
    }


}