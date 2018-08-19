#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int minimum(int a[],int n){
    int temp;
    for(int i=0; i<n; i++)
    {
            if(a[i] != 0){
            temp = a[i];
            break;
        }
    }
    
    for(int i=1; i<n; i++){
        if(a[i]<temp && a[i]!=0){
            temp=a[i];
        }
    }
    
    return temp;
}

int sum(int a[],int n){
   int tot=0;
    for(int i=0; i<n; i++){
        tot = tot + a[i];
    }
    
    return tot;
}

void calc(int a[],int min,int n){
   
    int min1;
    while(sum(a,n)!=0)
    {   int count = 0;
        min1 = minimum(a,n);
     
        for(int i=0; i<n; i++)
        {
            if(a[i]>=min1){
            count++;
            a[i]=a[i]-min1;
            }
        }
             cout<<count<<endl;
        
    }
    
}


int main()
{
    int n,min;
    cin>>n;
    int ar[n];
    cin>>ar[0];
    for(int i=1; i<n; i++){
        cin>>ar[i];
        }
    calc(ar,min,n);
    
    return 0;
}
