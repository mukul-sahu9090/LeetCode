class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int digit=nums[i];
            int count=0;
            while(digit>0){
                count++;
                digit/=10;
            }
            if(count%2==0){
                ans++;
            }
        }
        return ans;
        
    }
};
