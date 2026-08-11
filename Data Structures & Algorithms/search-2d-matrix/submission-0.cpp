class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int up = 0, down = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (up < down){
            int mid = up + (down - up)/2 + 1;

            if (matrix[mid][0] > target) down = mid - 1;
            else up = mid;
        }

        while (left <= right){
            int mid = left + (right - left)/2;

            if (matrix[up][mid] == target) return true;
            else if (matrix[up][mid] > target) right = mid - 1;
            else left = mid + 1;
        }

        return false;
        
    }
};
