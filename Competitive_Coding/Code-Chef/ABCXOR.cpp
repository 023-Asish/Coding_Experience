#include <bits/stdc++.h>
using namespace std;

void frindSolveFunction()
{
    long long int n,k; 
        cin>>n>>k; 
        k=n; 
        long long int asish=1; 
        while(k) 
        { 
            k--;
            asish*=4; 
        } 
        asish-=((1<<n)-1)*3; 
        cout<<asish-1<<endl;
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