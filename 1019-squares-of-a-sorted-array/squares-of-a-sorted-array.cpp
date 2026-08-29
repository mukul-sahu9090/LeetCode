class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int dig=nums[i]*nums[i];
            nums[i]=dig;
        }
        // sort(arr.begin(),arr.end());
        int st=0;
        int end=nums.size()-1;
        int i=n-1;
        while(st<=end){
            if(nums[st]>nums[end]){
                arr[i]=nums[st];
                st++;
                i--;
            }
            else{
                arr[i]=nums[end];
                end--;
                i--;
            }
            
        }
        return arr;
        
    }
};