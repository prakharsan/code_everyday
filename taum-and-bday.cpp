#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long int n,b,w,bc,wc,z;
    cin>>n;
    for(long long int i=0; i<n; i++)
    {
        long long int cost;
        cin>>b>>w;
        cin>>bc>>wc>>z;
    
        if(bc+z<wc)
        {
            cost = b*bc + w*(bc+z);
            
        }
        
        else if(wc+z<bc)
        {
            cost = b*(wc+z) + w*wc;
        }
        else 
        {
            cost = b*bc + w*wc;
        }
        
    
        
        cout<<cost<<endl;
        
    }
    return 0;
}


