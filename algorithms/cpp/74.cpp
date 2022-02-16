class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        const int cols = matrix[0].size();
        int l = 0;
        int r = matrix.size() * cols;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (matrix[m / cols][m % cols] == target) return true;
            else if (matrix[m / cols][m % cols] > target) r = m;
            else l = m + 1;
        }
        return false;
    }
};
