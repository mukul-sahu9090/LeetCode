class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st=0;
        int end=letters.size()-1;
        char minimum='z';
        int count=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(letters[mid]>target){
                minimum=min(minimum,letters[mid]);
                end=mid-1;
                count++;
            }
            else{
                st=mid+1;
            }
        }
        if(count==0){
            return letters[0];
        }
        return minimum;
        
    }
};