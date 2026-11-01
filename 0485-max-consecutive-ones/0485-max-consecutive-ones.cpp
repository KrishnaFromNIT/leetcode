class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        int max_rep=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                temp++;
                max_rep=max(max_rep,temp);
            }else{
                temp=0;
            }
        }
        return max_rep;
    }
};