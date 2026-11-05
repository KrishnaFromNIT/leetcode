class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long N=n;
        bool is_negative=false;
        if(N<0){
            is_negative=true;
            N=-N;
        }

        while(N>0){
            if(N%2==1){
                ans=ans*x;
            }
            N=N/2;
            x=x*x;
        }
        if(is_negative){
            ans=1/ans;
        }
        return ans;
    }
};