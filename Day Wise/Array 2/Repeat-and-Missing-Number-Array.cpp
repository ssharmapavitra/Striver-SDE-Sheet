vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    int n = A.size();
    vector<int> a(n + 1, 0), sol;
    int rep = 0, mis = 0;
    for (int i = 0; i < n; i++)
    {
        a[A[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (a[i] == 0)
            mis = i;
        else if (a[i] > 1)
            rep = i;
    }
    sol.push_back(rep);
    sol.push_back(mis);
    return sol;
}

#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> a(n + 1, 0);
    int rep = 0, mis = 0;
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (a[i] == 0)
            mis = i;
        else if (a[i] > 1)
            rep = i;
    }
    return make_pair(mis, rep);
}
