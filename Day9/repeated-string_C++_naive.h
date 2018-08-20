#include <bits/stdc++.h>
#include<string.h>
using namespace std;

// Multiple cases time out due to time complexity
int main()
{
    string s;
    long long int n,l,count=0,count1=0;
    cin>>s;
    cin>>n;
    l=s.length();
  /* if(l==1 && s[0]=='a'){
        cout<<n;
        return 0;
    }*/
        for(long long int i=0;; i++)
        {
            if(s[i]=='a'){
                count1++;
            }
            count++;
            if(i==l-1){
                i=-1;
            }
            if(count == n){
                break;
            }
            
        }
        
    cout<<count1;
    
    
    
    
    return 0;
}
