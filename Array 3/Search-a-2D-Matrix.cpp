class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix[0].size();
        int low = 0, high = (matrix.size() * m) - 1;
        while (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (matrix[mid / m][mid % m] == target)
            {
                return true;
            }
            else if (target > matrix[mid / m][mid % m])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size(), m = matrix[0].size();
        int high = n - 1, low = 0, mid;
        while (high > low && high - low > 1)
        {
            mid = low + (high - low) / 2;
            if (target >= matrix[mid][0])
                low = mid;
            else
                high = mid - 1;
        }

        if (matrix[high][0] <= target)
            low = high;
        int piv = low;
        low = 0;
        high = m - 1;
        while (high > low)
        {
            mid = low + (high - low) / 2;
            if (matrix[piv][mid] == target || matrix[piv][low] == target || matrix[piv][high] == target)
                return true;
            else if (target > matrix[piv][mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (matrix[piv][low] == target)
            return true;
        else
            return false;
    }
};
