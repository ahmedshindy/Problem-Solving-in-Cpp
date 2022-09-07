#include <iostream>
#include <stack>
#include <string>
using namespace std;

/* WA1 the code is not right
int main()
{
    int WaitFor=1;
    int t, n;
    cin>>t;
    cin>>n;
    while(t>0)
    {
        int Trucks[n];
        int waitFor=1;
        stack <int >s;
        for(int i=n-1; i>=0; i--)
        {
            cin>>Trucks[i];
        }

        for(int i=n-1; i>=0; i--)
        {
            if(waitFor==Trucks[i])
            {
                waitFor++;
                // continue;
            }
            else if(!s.empty() && waitFor==s.top())
            {
                waitFor++;
                s.pop();
                continue;
            }
            else if(s.empty() || Trucks[i]<s.top())
            {
                s.push(Trucks[i]);
                continue;
            }
            else if(i==0)
            {
                cout<<"YES\n";      break;
            }
            else {cout<<"NO\n";     break;}
            
            

        }
        t--;
        

    }
}
//Note: with else if you don't need continue.
*/
int main()
{
    
    int t, n;
    cin>>t;
    cin>>n;
    
    bool can=true;
    int nextCar; 
    while(t>0)
    {   
        
        stack <int>s;
        int WaitFor=1;
        for(int i=0; i<n; i++)
        {
            
            cin>>nextCar;

            // loop s.size times 
            while (!s.empty() && s.top()== WaitFor)
            {
                /* code */
                WaitFor++;
                s.pop();
                continue;
            }

            if(nextCar==WaitFor)
            {
                WaitFor++;
                continue;
            }
            else if(s.empty() || nextCar<s.top())
             s.push(nextCar);
            else
            {
                can=false;
                break;
            }
        }
        if(can) cout<<"YES\n";
        else    cout<<"NO\n";
        t--;
        
        }
}