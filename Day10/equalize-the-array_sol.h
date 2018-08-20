#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,max,max_freq,ans;
    cin>>n;
    int a[n];
    int freq[100]={};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        for(int j=1; j<100; j++)
        {
            if(a[i]==j)
            {
                freq[j]++;
                break;
            }
            
        }
        
    }
        
    max_freq=freq[1];
    
    for(int i=2; i<100; i++ )
    {
        if(freq[i]>max_freq)
        {
            max_freq = freq[i];
        }
    }
    
    cout<<n-max_freq;
    
   
    
  

    return 0;
}