class Solution {
public:
    int reverse(int x) {
        long long int rev = 0;
        
        if(x/10==0){return x;}
        
        while(x!=0)
        {
            long rem = x%10;
            rev = rev*10+rem;
            x = x/10;
        }
        
         if(rev<INT_MIN || rev>INT_MAX)
         {
             return 0;
         }
        else 
            return rev;
        
        
    }
};