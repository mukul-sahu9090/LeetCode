class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        arr.push_back(nums[0]);
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]!=nums[i]){
                count=0;
            }
            if(count<2){
                arr.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
        
        return arr.size();
        
    }
};