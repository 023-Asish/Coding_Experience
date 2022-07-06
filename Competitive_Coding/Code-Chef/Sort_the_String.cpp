#include <bits/stdc++.h>
using namespace std;

void frindSolveFunction()
{
    int n;
    cin >> n;
    string str;
    cin>>str;
    int i=n-1;
    while(str[i]=='1'){
        i--;
    }
    int count=0;
    while(i>=0){
        if(str[i]=='1'){
            count++;
        }
        i--;
    }
    cout<<count<<endl;
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