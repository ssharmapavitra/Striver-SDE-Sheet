class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int temp = 1, ele;
        float n = nums.size();
        // if(n==1)ans.push_back(nums[0]);
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && nums[i] == nums[i + 1])
                temp++;
            else
                temp = 1;
            if (temp > float(n) / float(3.0) && nums[i] != ele)
                ans.push_back(nums[i]), ele = nums[i];
        }
        return ans;
    }
};