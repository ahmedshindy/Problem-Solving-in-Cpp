#include "stdio.h"
#include <iostream>
#include "string.h"
#include "algorithm"

using namespace std;
int main()
{
	int digit[101];
	int vis[101];
	int n, k;
	// read the two inputs and return the number of successful reads.

   // while(~scanf("%d%d",&n,&k))
	while (cin >> n >> k)
	{
		memset(digit, 0, sizeof(digit));
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < n; i++)
		{
			long long a; // 8 bytes for data a
			//scanf("%I64d",&a);
			cin >> a;
			//  if k=2 , a=1 amodk is 1
			int A = a % k;
			digit[A]++;
		}
		int cnt = 0;
		for (int i = 0; 2 * i <= k; i++)
		{
			if (i == 0 || k == 2 * i)

				cnt += digit[i] / 2;
			else
			{
				if (digit[i] && digit[k - i])
					cnt += min(digit[i], digit[k - i]);
			}
		}
		printf("%d\n", cnt * 2);
	}
}
/*
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "algorithm"

using namespace std;
int main()
{
    int digit[101];
    int vis[101];
    int n,k;
    // read the two inputs and return the number of successful reads.

   // while(~scanf("%d%d",&n,&k))
   while(cin>>n>>k)
    {
        memset(digit,0,sizeof(digit));
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            long long a; // 8 bytes for data a
            //scanf("%I64d",&a);
            cin>>a;
            //  if k=2 , a=1 amodk is 1
            int A=a%k;
            digit[A]++;
        }
        int cnt=0;
        for(int i=0; 2*i<=k; i++)
        {
            if (i == 0 || k == 2 * i)

                cnt+=digit[i]/2;
            else
            {
                if(digit [i] && digit [k-i])
                cnt+=min(digit[i],digit[k-i]);
            }
        }
        printf("%d\n",cnt*2);
    }
}
*/



// sol 
/*
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "algorithm"

using namespace std;
int main()
{
	int digit[101];
	int vis[101];
	int n, k;
	// read the two inputs and return the number of successful reads.

   // while(~scanf("%d%d",&n,&k))
	while (cin >> n >> k)
	{
		memset(digit, 0, sizeof(digit));
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < n; i++)
		{
			long long a; // 8 bytes for data a
			//scanf("%I64d",&a);
			cin >> a;
			//  if k=2 , a=1 amodk is 1
			int A = a % k;
			digit[A]++;
		}
		int cnt = 0;
		for (int i = 0; 2 * i <= k; i++)
		{
			if (i == 0 || k == 2 * i)

				cnt += digit[i] / 2;
			else
			{
				if (digit[i] && digit[k - i])
					cnt += min(digit[i], digit[k - i]);
			}
		}
		printf("%d\n", cnt * 2);
	}
}

*/