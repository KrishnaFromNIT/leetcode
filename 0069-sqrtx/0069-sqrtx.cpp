class Solution {
public:
    int mySqrt(int x) {
        if (x==1||x==0){
            return x;
        }    
        long long int str=0,end=x;
        long long int ans;
        while(str<=end){
            long long int mid=str+(end-str)/2; 
            if(mid*mid==x){
                return mid;
            }else if(mid*mid<x){
                ans=mid;
                str=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};