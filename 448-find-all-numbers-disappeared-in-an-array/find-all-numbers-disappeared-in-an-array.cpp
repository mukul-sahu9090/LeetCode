class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            int x=i;
            if(s.find(x)==s.end()){
                arr.push_back(i);
            }
        }
        return arr;
        
    }
};