class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=0;
        int end=nums.size();
        int n=end;
        if(end==1){
            return 0;
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    return mid;
                }
                else{
                    return mid+1;
                }
            }
            if(mid==n-1){
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }
                else{
                    return mid-1;
                }
            }
            if(nums[mid]>nums[mid+1] && nums[mid-1]<nums[mid]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return 0;
    }
};