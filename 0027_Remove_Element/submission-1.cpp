class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                count++;
                arr.push_back(nums[i]);
            }
        }
        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
        return count;
    
        
    }
};
