// MORE OPTIMAL CODE

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num==0 && num==digit){
                count++;
            }
            while(num>0){
                int rem=num%10;
                if(rem==digit){
                    count++;
                }
                num=num/10;
            }
        }
        return count ;
        
    }
};