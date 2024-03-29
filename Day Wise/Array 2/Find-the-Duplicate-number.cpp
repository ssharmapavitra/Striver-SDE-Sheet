class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_set<int> us;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (us.find(nums[i]) == us.end())
                us.insert(nums[i]);
            else
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> us;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (us.find(nums[i]) == us.end())
                us.insert(make_pair(nums[i], 1));
            else
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0], fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (fast != slow);
        fast = nums[0];
        while (fast != slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};