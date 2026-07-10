class Solution {
public:
    bool find(vector<vector<int>> &arr,int i,int target){
        int st=0;
        int end=arr[0].size()-1;
        while(st<=end){
            int mid=st+((end-st)/2);
            if(arr[i][mid]==target){
                return true;
            }
            else if(arr[i][mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rowR=mat.size();
        int colR=mat[0].size();
        int stR=0;
        int endR=rowR-1;
        while(stR<=endR){
            int midR=stR+((endR-stR)/2);
            if(mat[midR][0]<=target && mat[midR][colR-1]>=target){
                return find(mat,midR,target);
            }
            else if(mat[midR][0]>target){
                endR=midR-1;
            }
            else if(mat[midR][colR-1]<target){
                stR=midR+1;
            }
        }
        return false;
        
    }
};