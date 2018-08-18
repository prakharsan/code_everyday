#include <bits/stdc++.h>
#include<math.h>

using namespace std;



int main()
{
    /* Steps to check if a number is a perfect square or not:
        1.Take the square root
        2.Round/Ceil/Floor the above obtained value
        3. If val1-val2 = 0 then its a perfect square
        */
  
    float n,e1,e2,temp,temp_new,count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>e1>>e2;
        for(int j=e1; j<=e2; j++){
            temp = sqrt(j);
            temp_new = ceil(temp);
            if(temp - temp_new == 0){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    
    
    return 0;
}

