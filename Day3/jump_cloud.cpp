#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,k,e=100;
    cin>>n>>k;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
 
 int i = 0;
    do
    {   e--;
        i = (i+k)%n;
        //0 to (k+i)%n
        if(ar[i]==1)
        {
            e = e - 2;
        }
        //cout<<e<<endl;
    }
 while( i != 0 );
    
     cout<<e;
 
    return 0;
}