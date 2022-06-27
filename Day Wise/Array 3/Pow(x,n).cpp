class Solution
{
public:
    double myPow(double x, int nn)
    {
        int flag = (nn >= 0 ? 1 : -1);
        long n = nn;
        double ans = 1.0;
        if (flag == -1)
            n = -1 * n;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                x = x * x;
                n = n / 2;
            }
            else
            {
                ans = ans * x;
                n = n - 1;
            }
        }
        // cout<<ans<<endl;
        if (flag == -1)
            ans = double(1.0) / double(ans);
        return ans;
    }
};

// Brute Force Time limit exceed

class Solution
{
public:
    double myPow(double x, int n)
    {
        int flag = (n >= 0 ? 1 : -1);
        double ans = 1;
        n = abs(n);
        for (int i = 1; i <= n; i++)
        {
            ans = ans * x;
        }
        return (flag == 1 ? ans : 1.0 / ans);
    }
};