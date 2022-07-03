#include <bits/stdc++.h>
using namespace std;

void frindSolveFunction()
{
    int n;
    cin >> n;
    vector<int> manik(n+2), high(n+2);
    vector<int> tenp(n+2,0);
    for(int i = 1; i <= n; i++){
        
        cin >> manik[i] >> high[i];
        int l = manik[i],r = high[i];
        tenp[r+1] -= 1;
        tenp[l] += 1;
    }

    for(int it = 1;it <=n;it++){
        tenp[it] += tenp[it-1];
    }
    vector<int> MyFinal;
    for(int i = 1; i <= n; i++){
        if(tenp[i] == n - 1){
            if( !(manik[i] <= i and high[i]>=i))
                MyFinal.push_back(i);
        }
    }
    
   cout << MyFinal.size() <<endl;
    for(auto & item: MyFinal)
        cout << item <<endl;
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