// You can contribute the starter code

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = nums[0], start, temp = 0, act = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            act += nums[i];
            maxi = max(maxi, act);
            if (act < 0)
                act = 0;
        }
        return maxi;
    }
};

/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=0,max=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++)
        {
            temp=temp+nums[i];
            if(max<temp)
                max=temp;
            if(temp<0)
                temp=0;
        }
        return max;


    }
};*/