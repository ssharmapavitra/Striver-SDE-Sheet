// You can contribute the starter code

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> arr;
        sort(intervals.begin(), intervals.end());
        int piv = 0;
        arr.push_back({1, 1});
        arr[0].resize(2);
        arr[0][0] = intervals[0][0];
        arr[0][1] = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= arr[piv][1])
            {
                arr[piv][1] = max(intervals[i][1], arr[piv][1]);
                arr[piv][0] = min(intervals[i][0], arr[piv][0]);
            }
            else
            {
                piv++;
                arr.push_back({1, 1});
                arr[piv].resize(2);
                arr[piv][0] = intervals[i][0];
                arr[piv][1] = intervals[i][1];
            }
        }
        return arr;
    }
};
