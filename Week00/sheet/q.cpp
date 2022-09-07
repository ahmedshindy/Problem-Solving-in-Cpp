#include <iostream>
#include <string>
using namespace std;
void display_in_reverse_digits(std::string x);
int main()
{
 int T;
 cin>>T;
 string s;
 for(int i=1; i<=T; i++)
 {
     cin>>s;
     display_in_reverse_digits(s);
 }
}
void display_in_reverse_digits(std::string x)
{
    int i=x.size();

    for(int i; i>=0; i--)
    {
        if(i==0)
        {
            cout<<x[i]<<endl;
            return ;
        }
        cout<<x[i]<<" ";
    }
    return ;
}

/*
void digits(int x);
int main()
{
    digits(858);
    return 0;
    int N;
    cin>>N;
    int A[N];
    for (int i=0; i<N; i++)
    cin>>A[i];

    for (int i=0; i<N; i++)
    {
    digits(A[i]);
    cout<<"\n";
    }
    
   
}

void digits(int x)
{
    
vector<int>Digits;
int remainder;

    cout<<"\ndigits size= "<<Digits.size();
    while(x>0)
    {
        remainder=(x%10);

        if(remainder==0)
        {
            
            Digits.push_back(remainder);
            x=x/10;
        
        }
        else{
            Digits.push_back(remainder);
            x=x-remainder;
        }
      
            


    }
    
    for (int i=0; i<Digits.size(); i++)
            {
                cout<<Digits[i]<<" ";
            }
            cout<<"\ndigits size= "<<Digits.size();
}
*/