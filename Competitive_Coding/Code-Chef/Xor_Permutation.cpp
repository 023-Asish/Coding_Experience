#include <bits/stdc++.h>
using namespace std;

void frindSolveFunction()
{
    long long n;
    cin>>n;
    if(n<=3){
        cout<<-1;
        return;
    }
    int i=n;
    while(i>4){
        cout<<i<<" ";
        i--;
    }
    cout<<"1 4 2 3";
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
        cout<<endl;
    }
    return 0;
}