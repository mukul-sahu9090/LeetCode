class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        // st=1;
        // end=n-2;
        // if(target<nums[0]){
        //     return 0;
        // }
        // if(target>nums[n-1]){
        //     return n;
        // }
        // while(st<=end){
        //     int mid=st+(end-st)/2;
        //     if(target>nums[mid-1] && target<nums[mid]){
        //         return mid;
        //     }
        //     else if(target>nums[mid]){
        //         st=mid+1;
        //     }
        //     else{
        //         end=mid-1;
        //     }
        // }
        return st;
        
    }
};