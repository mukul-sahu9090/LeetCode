class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int srow=0;
        int erow=mat.size()-1;
        int scol=0;
        int ecol=mat[0].size()-1;
        vector<int> arr;
        while(srow<=erow && scol<=ecol){
            //top
            for(int i=scol;i<=ecol;i++){
                arr.push_back(mat[srow][i]);
            }
            //right
            for(int i=srow+1;i<=erow;i++){
                arr.push_back(mat[i][ecol]);
            }
            //bottom
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                arr.push_back(mat[erow][i]);
            }
            //left
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol){
                    break;
                }
                arr.push_back(mat[i][scol]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return arr;
        
    }
};