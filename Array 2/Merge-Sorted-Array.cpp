class Solution
{
public:
    void merge(vector<int> &num1, int m, vector<int> &num2, int n)
    {
        int gap = ceil((float)(n + m) / 2);
        for (int i = m; i < n + m; i++)
            num1[i] = num2[i - m];
        if (n > 0)
            while (gap > 0)
            {
                for (int i = 0; i + gap < n + m; i++)
                {
                    if (num1[i] > num1[i + gap])
                        swap(num1[i], num1[i + gap]);
                }
                if (gap == 1)
                {
                    gap = 0;
                }
                else
                {
                    gap = ceil((float)gap / 2);
                }
            }
    }
};

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m;i<n+m;i++)
            nums1[i]=nums2[i-m];
        sort(nums1.begin(),nums1.end());
    }
};
\*/