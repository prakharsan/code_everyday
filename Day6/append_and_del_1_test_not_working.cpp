#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s,t;
    int k,s_len,t_len,min_len,temp,count=0;
    cin>>s;
    cin>>t;
    cin>>k;
    s_len=s.length();
    t_len=t.length();
    
    if(s_len>t_len){
        min_len = t_len;
        
    }
    else{
        min_len = s_len;
    }
    
   for(int i = 0; i<min_len; i++)
   {
       
           if(s[i] == t[i])
           {
               //ut<<s[i];
               count++;
               
           }
            else{
                break;
            }
       
           
   }
    
    
  //cout<<count<<endl;
    if(s_len<t_len)
    {
        temp = t_len+s_len;
    }
    else{
        temp= t_len-count+s_len-count;
    }
    if(temp <= k)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
