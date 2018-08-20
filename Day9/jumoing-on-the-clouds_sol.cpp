#include <bits/stdc++.h>

using namespace std;
    
    int move(int a[],int n)
    {
        int i=0,count1=0;
        while(i<=n)
        {
            count1++;
            //cout<<i<<endl;
            if(a[i+2]==1){
                i=i+1;
            }
            else if(a[i+2]!=1){
                i=i+2;
            }
            else if( i+2 == n )
            {
                i=i+1;
            }
        
        }
        return count1;
    }


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    cout<<move(a,n)-1;

    return 0;
}