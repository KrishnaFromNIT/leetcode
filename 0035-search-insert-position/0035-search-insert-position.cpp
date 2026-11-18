class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int str=0;
        int end=nums.size()-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(nums[mid]<target){
                str=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                return mid;
            }
        }
        return str;
    }
};