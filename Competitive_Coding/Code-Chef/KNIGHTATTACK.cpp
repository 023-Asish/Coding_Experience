#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;

void fun(int i, int j)
{
    if (i + 2 <= 8 && j + 1 <= 8)
    {
        mp[(i + 2) * 10 + (j + 1)]++;
    }
    if (i + 2 <= 8 && j - 1 >= 1)
    {
        mp[(i + 2) * 10 + (j - 1)]++;
    }
    if (i + 1 <= 8 && j + 2 <= 8)
    {
        mp[(i + 1) * 10 + (j + 2)]++;
    }
    if (i - 1 >= 1 && j + 2 <= 8)
    {
        mp[(i - 1) * 10 + (j + 2)]++;
    }
    if (i - 2 >= 1 && j + 1 <= 8)
    {
        mp[(i - 2) * 10 + (j + 1)]++;
    }
    if (i - 2 >= 1 && j - 1 >= 1)
    {
        mp[(i - 2) * 10 + (j - 1)]++;
    }
    if (i + 1 <= 8 && j - 2 >= 1)
    {
        mp[(i + 1) * 10 + (j - 2)]++;
    }
    if (i - 1 >= 1 && j - 2 >= 1)
    {
        mp[(i - 1) * 10 + (j - 2)]++;
    }
}

void frindSolveFunction()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 && y1 == y2)
    {
        cout << "YES" << endl;
        return;
    }
    // for x1,y1---------------------
    fun(x1, y1);
    fun(x2, y2);
    for (auto &i : mp)
    {
        if (i.second > 1)
        {
            mp.clear();
            cout << "YES" << endl;
            return;
        }
    }
    mp.clear();
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        frindSolveFunction();
    }
    return 0;
}