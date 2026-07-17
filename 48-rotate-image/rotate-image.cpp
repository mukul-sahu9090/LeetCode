class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int row=mat.size()-1;
        int col=mat[0].size();
        vector<vector<int>> arr=mat;
        for(int j=row;j>=0;j--){
            int idx=row;
            for(int i=0;i<col;i++){
                mat[j][i]=arr[idx][j];
                idx--;
            }
        }
        
    }
};