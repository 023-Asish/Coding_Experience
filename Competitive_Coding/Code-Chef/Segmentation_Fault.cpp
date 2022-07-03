#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        unordered_map<int, int> mp;
        long long n;
        cin >> n;
        vector<int> v;
        int count = 0;
        int left[n], right[n];
        for (int i = 0; i < n; i++)
        {
            cin >> left[i] >> right[i];
            for (int j = left[i]; j <= right[i]; j++)
            {
                mp[j]++;
                if (mp[j] == n - 1)
                {
                    count++;
                    v.push_back(j);
                }
            }
        }

        cout << count << endl;
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
    }
    return 0;
}