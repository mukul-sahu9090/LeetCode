class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size()-1;
        int col=mat[0].size()-1;
        int st=0;
        while(st<=row && col>=0){
            if(mat[st][col]==target){
                return true;
            }
            else if(mat[st][col]>target){
                col--;
            }
            else{
                st++;
            }
        }
        return false;
        
    }
};