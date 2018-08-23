#include <bits/stdc++.h>
#include<math.h>
using namespace std;



int main()
{
   long long int n,k,count=0,temp;
    cin>>n>>k;
    long long int a[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
        
    }

    
    for(long long int i=0; i<n; i++)
    {
        for(long long int j=0; j<n && i!=j; j++)
        {
            if((a[i]+a[j])%k != 0)
            {
              cout<<a[j]<<" "<<a[i]<<endl;
                count++;
            }
        }
    }
    
   temp=1+sqrt(1+8*count);
    cout<<temp/2;
    
  
    
    
    return 0;
}

