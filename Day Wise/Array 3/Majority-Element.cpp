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

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int c1 = 0, c2 = 0, p1 = 0, p2 = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (p1 == nums[i])
                c1++;
            else if (p2 == nums[i])
                c2++;
            else if (c1 == 0)
                p1 = nums[i], c1++;
            else if (c2 == 0)
                p2 = nums[i], c2++;
            else
                c1--, c2--;
        }
        vector<int> ans;
        c1 = c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == p1)
                c1++;
            else if (nums[i] == p2)
                c2++;
        }
        if (c1 > n / 3)
            ans.push_back(p1);
        if (c2 > n / 3)
            ans.push_back(p2);
        return ans;
    }
};