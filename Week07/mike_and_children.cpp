#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Read Input
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n ; i++)
    {
        cin>>a[i];
    }
    //Sort Array a
    sort(a);
    // find min pair sum and max pair sum a[0]+a[1] , a[n-2]+a[n-1]
    int min_pair=a[0]+a[1];
    int max_pair=a[n-1]+a[n-2];

    // make struct of items and each item has pairs
    struct two_sums_and_its_n_pairs[max_pairs-min_pairs]
    {
       int item;
       int N_pair;
    };

    //for min_pair-> max_pair : check_item(i);
    for(int item_sum=min_pair, item_sum<=max_pair; item_sum++)
    {
        
        for(int i=0; i<n/2 ; i++)
    }
    
    

}

