class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> M(cols, vector<int>(rows));

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
                M[j][i] = matrix[i][j];
        }
        return M;
    }
};