class Solution {
public:
    int binarysearch(vector<int> &nums,int tar,int st,int end){
        if(st>end){
            return -1;
        }
        int mid=st+(end-st)/2;
        if(nums[mid]==tar){
            return mid;
        }
        else if(nums[mid]>tar){
            return binarysearch(nums,tar,st,mid-1);
        }
        else{
            return binarysearch(nums,tar,mid+1,end);
        }
    }


    int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        return binarysearch(nums,target,st,end);
    }
};