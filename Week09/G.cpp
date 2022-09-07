// Card Game
//============================================================================
// Name        : CppFirst.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string Mstr, Astr,Rstr;
    stack <char>Mstk;
    stack <char>Astk;
    stack <char >Rstk;
	int lenM, lenA,lenR;
	cin>>Mstr>>Astr>>Rstr;
    lenM=Mstr.length()-1;
    lenA=Astr.length()-1;
    lenR=Rstr.length()-1;
    //converting  Strs  to Stks
    for(int i=lenM ; i>=0; i--)
        Mstk.push(Mstr[i]);
    for(int i=lenA ; i>=0; i--)
        Astk.push(Astr[i]);
    for(int i=lenR ; i>=0; i--)
        Rstk.push(Rstr[i]);
    

        char next='m';
    while(1)
    {
        if(next=='m')
        {
            if(Mstk.empty())
            {
                cout<<'M'<<"\n";
                return 0;
            }
            else 
            {
                next=Mstk.top();
                Mstk.pop();
            }
        }
// A
        if(next=='a')
        {
            if(Astk.empty())
            {
                cout<<'A'<<"\n";
                return 0;
            }
            else 
            {
                next=Astk.top();
                Astk.pop();
            }
        }
//R
        if(next=='r')
        {
            if(Rstk.empty())
            {
                cout<<'R'<<"\n";
                return 0;
            }
            else 
            {
                next=Rstk.top();
                Rstk.pop();
            }
        }
    }

}
