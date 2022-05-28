#include <bits/stdc++.h>
using namespace std;

#define veci vector<int>
bool rev(veci a, int i)
{
    int n = a.size();
    // base
    if (i >= n / 2)
    {
        return true;
    }
    if (a[i] == a[n - 1 - i])
        return rev(a, i + 1);
    return false;
    // recuurance relation
}

int main()
{
    veci a = {1, 0, 0, 0, 1};
    cout << rev(a, 0);
    return 0;
}