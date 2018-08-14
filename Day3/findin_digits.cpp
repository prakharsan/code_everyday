n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        temp1=temp;
        while(temp !=0 )
        {
            rem = temp%10;
            if(rem==0)
            {
                temp = temp/10;
                continue;
            }
            if(temp1%rem==0)
            {
                count++;
            }
           
            temp = temp/10;
            
        }
        
        cout<<count<<endl;
        count = 0;
    }
    
    

    return 0;
}
