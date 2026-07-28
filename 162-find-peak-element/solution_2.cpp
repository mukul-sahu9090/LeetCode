class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lp=0;
        int rp=nums.size()-1;
        int maximum=INT_MIN;
        int value=INT_MIN;
        while(lp<=rp){
            maximum=max(nums[lp],nums[rp]);
            value=max(value,maximum);
            lp++;
            rp--;
        }
        auto it = find(nums.begin(),nums.end(),value);
        int index = it - nums.begin();  
        return index;
    }
};
