#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; //number of elements
    cin>>n;
    int ar[n+1];
    ar[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i == ar[j])
            {
                for(int k=1; k<=n; k++)
                {
                    if(j==ar[k])
                    {
                        cout<<k<<endl;
                    }
                }
            }
        }
    }
    
    
    return 0;
}