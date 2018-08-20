#include <bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    string s;
    long long int n,l,count=0,count1=0;
    cin>>s;
    cin>>n;
    l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    for(int i=0; i<n%l; i++)
    {
        if(s[i]=='a')
        {
            count1++;
        }
    }
    cout<<(n/l)*count+count1;
    
    
    
    
    return 0;
}
