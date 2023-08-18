class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, h = (m*n)-1, mid;

        while(l <= h)
        {
            mid = (l + h)/2;
            if(target == matrix[mid/n][mid%n])
                return true;
            if(target < matrix[mid/n][mid%n])
                h = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};