#include <bits/stdc++.h>

using namespace std;



int main()
{
     long long int n,k,q,temp_query;
    cin>>n>>k>>q; //number of elements,number of rotations, number of queries
      long long int ar[n],ar_ind[n];
    //inp. all the elements
    for(long long int i = 0; i<n; i++)
    {
        cin>>ar[i];
        ar_ind[i]=i;
    }
    
     //increasing each array_index by 1 and setting the highest index to 0
    for(long long int i=0; i<k; i++)
    {
      for(long long int j=0; j<n; j++)
      {
          ar_ind[j]++;
          if(ar_ind[j] == n ){
              ar_ind[j] = ar_ind[j] - n;
          }
      }
    }
    long long int ar_fin[n];
    for(long long int i=0; i<n; i++)
    {
        ar_fin[ar_ind[i]] = ar[i];
    }
    
    for(long long int i=0; i<q; i++)
    {
        cin>>temp_query;
        cout<<ar_fin[temp_query]<<endl;
    }
  
    return 0;
}
