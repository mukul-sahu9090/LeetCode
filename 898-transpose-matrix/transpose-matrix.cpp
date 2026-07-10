class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int col=mat[0].size();
        int row=mat.size();
        vector<vector<int>> arr(col,vector<int> (row));
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                arr[i][j]=mat[j][i];
            }
        }
        return arr;
        
    }
};