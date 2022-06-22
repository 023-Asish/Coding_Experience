#include <bits/stdc++.h>
using namespace std;


void frindSolveFunction()
{
    int n,xVar;
    cin>>n;
        vector<long long> asish(n+1);
        vector<long long> manik(n+1);
        vector<long long> mistu(n+1);
        for(int i=0;i<n;i++){
            cin>>xVar;
            asish[0]+=1;
            asish[xVar]-=1;
            manik[0]+=(n-xVar+1);
            manik[xVar]-=(n-xVar+1);
            mistu[n-1]+=(n-xVar);
            mistu[xVar]-=(n-xVar);
        }
        for(int i=1;i<=n;i++){
            asish[i] += asish[i-1];
            manik[i] += manik[i-1];
        }
        for(int i=n-1;i>=0;i--){
            mistu[i]+=mistu[i+1];
        }
        for(int i=0;i<n;i++){
            int ans = manik[i] + mistu[i];
            cout<<asish[i]<<" "<<ans<<endl;
        }
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