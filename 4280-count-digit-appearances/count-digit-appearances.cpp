class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                int rev=nums[i]%10;
                if(rev==digit){
                    count++;
                }
                nums[i]=nums[i]/10;
            }
        }
        return count ;
        
    }
};