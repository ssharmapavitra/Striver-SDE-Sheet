#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> list)
{
    if (list.size() == 0)
        return 0;
    int sum = 0;
    for (int i = 0; i < list.size(); i++)
    {
        sum += list[i];
    }
    return sum;
}

void fun(int &gift_voucher, vector<int> &items, vector<vector<int>> &ans, vector<int> list, int piv, int &max)
{
    // stopping condition
    if (piv == items.size())
    {
        if (sum(list) > max && sum(list) <= gift_voucher)
        {
            max = sum(list);
            ans.clear();
            ans.push_back(list);
            return;
        }
        else if (sum(list) == max)
        {
            ans.push_back(list);
            return;
        }
        else
        {
            return;
        }
    }

    // recursive call
    else
    {
        piv++;
        fun(gift_voucher, items, ans, list, piv, max);
        list.push_back(items[piv - 1]);
        fun(gift_voucher, items, ans, list, piv, max);
    }
}

string easy(int max, int gift_voucher)
{
    if (max == gift_voucher)
        return "true";
    else
        return "false";
}

void medium(int max, int gift_voucher, vector<vector<int>> ans)
{
    if (max == gift_voucher)
    {
        cout << "Maximum utilized = "
             << "Yes" << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void hard(int max, vector<vector<int>> ans)
{
    cout << "Maximum Utilization = " << max << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int gift_voucher, max = 0;
    cin >> gift_voucher;
    vector<int> items, list;
    vector<vector<int>> ans;

    // imput
    int temp;
    while (cin >> temp)
    {
        items.push_back(temp);
    }
    // call function
    fun(gift_voucher, items, ans, list, 0, max);

    // printing answer
    cout << "******Easy******" << endl;
    cout << easy(max, gift_voucher) << "\n"
         << endl;
    cout << "*******Medium******" << endl;
    medium(max, gift_voucher, ans);
    cout << endl;
    cout << "*******Hard******" << endl;
    hard(max, ans);

    return 0;
}