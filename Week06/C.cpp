// Wonderful numbers
#include <iostream>     // std::cout
#include <string>       // std::vector
using namespace std;

bool isPalindrome(std::string s);
string toBinary(int N);


int main () {
    int n;
    string s= toBinary(10);

}

string toBinary(int N)
{
    string s="";
    char rem;
    int result=2;
    

    while (result != 0)
    {
        
        rem=(char)(N%2);
        s.push_back(rem);
        N=N/2;
        result =N/2;
    }
    cout<<s<<endl;
    return s;
    
}