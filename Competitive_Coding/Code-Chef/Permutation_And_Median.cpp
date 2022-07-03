#include <bits/stdc++.h>
using namespace std;

void frindSolveFunction()
{
    long long n;
    cin>>n;
    int rightValue=n;
    int leftValue=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<rightValue--<<" ";
        }
        else{
            cout<<leftValue++<<" ";
        }
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
        cout<<endl;
    }
    return 0;
}