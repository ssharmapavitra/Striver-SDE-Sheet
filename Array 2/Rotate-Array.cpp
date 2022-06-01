#include <bits/stdc++.h>
using namespace std;

#define veci vector<int>
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix[0].size(), temp;

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < (n / 2); j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
}
int main()
{
    int n, temp;
    cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    rotate(arr);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}