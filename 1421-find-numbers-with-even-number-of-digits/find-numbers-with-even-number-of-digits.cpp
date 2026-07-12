class Solution {
public:
    int findNumbers(vector<int>& nums) {
        //optimal code 
        int ans=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<=99 and nums[i]>=10){
            ans++;
        }
        else if(nums[i]<=9999 and nums[i]>=1000){
            ans++;
        }
        else if(nums[i]<=999999 and nums[i]>=100000){
            ans++;
        }

        }
        
        return ans++;
        
    }
};