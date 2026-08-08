class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       vector<vector<int>> ans(r, vector<int>(c));
        vector<int>copy;
        if(mat.size()*mat[0].size() != r*c){
            cout<<"ran";
            return mat;
        }
        for(int i = 0; i<mat.size();i++){
            for(int j = 0; j<mat[i].size();j++){
                copy.push_back(mat[i][j]);
            }
        }
        int m = 0;
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                ans[i][j]=copy[m];
                cout<<"ran1";
                if(m < copy.size()-1){
                    m++;
                }
            }
        }

        return ans;
    }
};