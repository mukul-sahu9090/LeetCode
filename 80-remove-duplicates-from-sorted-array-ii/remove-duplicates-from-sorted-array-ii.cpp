class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0){       //if array is empty
            return 0;
        }
        int j=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]!=nums[i]){
                count=0;
            }
            if(count<2){
                nums[j]=nums[i];
                j++;
                count++;
            }
        }
        return j;
    }
};