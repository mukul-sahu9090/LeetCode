class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==-nums[j]){
                    arr.push_back(max(nums[i],nums[j]));
                }
            }
        }
        int n=arr.size();
        if(n==0){
            return -1;
        }
        int maxElement=*max_element(arr.begin(),arr.end());
        return maxElement;
        
    }
};