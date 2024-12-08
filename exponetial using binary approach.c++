class Solution {
public:
    long long md=1e9+7;
    long long getExponential(long long num,long long pow){
        if(pow==0)
           return 1;
        long long ans=1;
        while(pow>0){
            if(pow%2==1){
                ans=(ans*num) % md;

            }
            num=(num*num) % md;
            pow=pow/2;
        }
        return ans% md;
    }
    int countGoodNumbers(long long n) {
       if(n==0)
          return 1;
       long long fivePow=0;
       long long fourPow =0;
       if(n%2==0){
          fivePow=n/2;
          fourPow=n/2;
       }
       else{
          fivePow=n/2+1;
          fourPow=n/2;
       }
       cout<<"fivePow: "<<fivePow<<endl;
       cout<<"fourPow: "<<fourPow<<endl;
       cout<<getExponential(5,fivePow)<<endl;
       cout<<getExponential(4,fourPow)<<endl;
       long long ans =(getExponential(5,fivePow)*getExponential(4,fourPow))% md;
       return ans;
          
    }
};
