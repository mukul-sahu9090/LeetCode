class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        int ans=0;
        for(int i=low;i<=high;i++){
            count=0;
            int sum1=0;
            int sum2=0;
            int n=i;
            while(n>0){
                count++;
                n=n/10;
            }
            if(count%2!=0){
                continue;
            }
            n=i;
            for(int j=0;j<count/2;j++){
                int digit=n%10;
                sum1=sum1+digit;
                n=n/10;
            }
            for(int j=count/2;j<count;j++){
                int digit=n%10;
                sum2=sum2+digit;
                n=n/10;
            }
            if(sum1==sum2){
                ans++;
            }
        }
        return ans;
        
    }
};