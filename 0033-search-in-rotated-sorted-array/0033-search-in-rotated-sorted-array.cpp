class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str=0,end=nums.size()-1;
        while(str<=end){
            int mid=str+(end-str)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[str]<=nums[mid]){
                if(nums[str]<=target&&nums[mid]>=target){
                    end=mid-1;
                }else{
                    str=mid+1;
                }
            }else{
                if(nums[mid]<=target&&nums[end]>=target){
                    str=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};