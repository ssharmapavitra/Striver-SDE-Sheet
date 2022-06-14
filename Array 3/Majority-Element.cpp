class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int temp = 1, n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                temp++;
            else
                temp = 1;
            if (temp > n / 2)
                return nums[i];
        }
        return (temp > n / 2.0 ? nums[0] : -1);
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element = nums[0], count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
                element = nums[i];
            if (element == nums[i])
                count++;
            else
                count--;
        }
        return element;
    }
};