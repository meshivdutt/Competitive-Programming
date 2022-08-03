 bool isHappy(int n) 
    {
        if(n==1)
           return true;
        unordered_map<int,int> m;
        m[n]=1;
        while(1)
        {
            int sum=0;
            while(n)
            {
                int temp=n%10;
                sum+=temp*temp;
                n/=10;
            }
            if(m[sum])
                return false;
            if(sum==1)
            {
                return true;
            }
            n=sum;
            m[n]++;
        }
        return true;
        
        
    }
