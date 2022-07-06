#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void frindSolveFunction()
{
    ll n; cin >> n; 
 
        ll Asish=0; 
 
        for(int itera=1;itera<=n;itera++) 
        { 
            ll x; cin>> x;
            ll tempValue= abs(x-itera); 
            Asish=__gcd(Asish,tempValue); 
        } 
        cout<<Asish<<endl; 
    
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