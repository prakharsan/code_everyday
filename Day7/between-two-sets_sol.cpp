#include <iostream>

using namespace std;



int main() {
    int n,m,max,min,count=0,f;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; ++i)
    {cin>>a[i];}
    for(int i=0 ;i<m; i++)
    {cin>>b[i];}
    
    max=a[0];
    min=b[0];
    for(int i=0; i<n; i++)
    {if(a[i]>max)
    {max=a[i];}
    }
    for(int i=0; i<m; i++)
    {if(b[i]<min)
    {min=b[i];}
    }
    
    for(int i=max; i<=min; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                if(i % a[j] != 0 || b[k] % i != 0)
                {  //cout<<"this is a:"<<a[j]<<endl;
                 //cout<<"this is b:"<<b[k]<<endl;
                    //cout<<i<<endl;
                    f=0;
                    break;
                }
                if(i % a[j] == 0 && b[k] % i == 0)
                {  //cout<<"this is a:"<<a[j]<<endl;
                 //cout<<"this is b:"<<b[k]<<endl;
                    //cout<<i<<endl;
                    f=1;
                }
               
            }
          
        }
        
       
            if(f==1){
        cout<<i<<" ";
    }
      count=count+f;
        
    }

    
    cout<<count;
    
    return 0;
}
