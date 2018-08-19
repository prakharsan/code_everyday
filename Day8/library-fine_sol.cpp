#include <bits/stdc++.h>

using namespace std;

int fine(int d1,int m1,int y1,int d2,int m2,int y2){
   int temp;
    if(d1 <= d2 && m1 <= m2 && y1 <=y2){
       temp=0;
   }
    if(d1>d2 && m1 == m2 && y1==y2){
        temp=(d1-d2)*15;
    }
    if(m1>m2 && y1==y2){
        temp=(m1-m2)*500;
    }
    if(y1>y2){
        temp=10000;
    }
    
    return temp;
}
int main()
{
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    cout<<fine(d1,m1,y1,d2,m2,y2);

    return 0;
}