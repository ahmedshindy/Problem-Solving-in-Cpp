#include <iostream>
#include <string>
using namespace std;

bool found=false;
bool is_lucky_number(int x);
int main()
{
    int A,B;
    cin>>A>>B;
    for(int i=A; i<=B; i++)
    {
        if(is_lucky_number(i))
        {
            cout<<i<<" ";
            found=1;
        }
    }
    if(!found)
    {
        cout<<-1;
    }
    cout<<endl;  
    
}

bool is_lucky_number(int x)
{
    std::string s =to_string(x);
    for(int i=0 ; i<s.size() ;i++)
    {  if(s[i] == '4'  || (s[i] == '7'))
        {
            continue;
        } 
        else  return false;
    }
 
    return true;
}


/*
int main_2()
{
    int A,B;
    cin>>A>>B;
   
    
    vector<int>v;
    for (int i=A; i<=B; i++)
    {
        if(is_lucky_number(i))
            v.push_back(i);
    }


    if(!found)
    {
        cout<<-1<<"\n";
        return 0;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; 
    }
    cout<<"\n";


    return 0;
}


bool is_lucky_number(int x)
{
    int remainder;
    bool is_seven;
    bool is_four;
    while(x>0)
    {
        remainder=x%10;
        if(remainder==0)
        {
            return false;
        }
        x=x-remainder;
        is_seven=(remainder==7);
        is_four=(remainder==4);

        if( !(is_four) && !(is_seven))
            return false;
    }

    
    found=true;
    return true;
}
*/