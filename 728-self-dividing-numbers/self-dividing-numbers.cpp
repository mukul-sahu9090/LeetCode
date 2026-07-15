class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left;i<=right;i++){
            int count=0;
            int n=i;
            while(n>0){
                int digit=n%10;
                if(digit==0){
                   count++;
                   break;
                }
                if(i%digit!=0){
                    count++;
                }
                n/=10;
            }
            if(count==0){
                arr.push_back(i);
            }
        }
        return arr;
        
    }
};