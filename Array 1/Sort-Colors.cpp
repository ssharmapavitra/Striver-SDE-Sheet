#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size(), high = n - 1, mid = 0, low = 0;
    while (mid <= high)
    {
        switch (nums[mid])
        {

        case 0:
            swap(nums[low], nums[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(nums[mid], nums[high]);
            high--;
            break;
        }
    }
}
int main()
{
    vector<int> veci;
    int temp, n;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        veci.push_back(temp);
    }

    sortColors(veci);

    for (int i = 0; i < veci.size(); i++)
    {
        cout << veci[i] << " ";
    }

    return 0;
}

/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,one=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            if(nums[i]==1)
                one++;
        }
        int i;
        for(i=0;i<z;i++)
            nums[i]=0;
        for(;i<z+one;i++)
            nums[i]=1;
        for(;i<nums.size();i++)
            nums[i]=2;
    }
};
*/