#include <bits/stdc++.h>
using namespace std;


void frindSolveFunction()
{
    int n;
    string str;
    cin>>n;
    cin>>str;
    int l=0,r=n-1;
    int count=0;
    while(l<r){
        if(str[l]=='(' && str[r]==')'){
            l++;r--;
        }
        else if(str[l]=='(' && str[r]=='('){
            r--;
            count++;
        }
        else if(str[l]==')' && str[r]==')'){
            l++;
            count++;
        }
        else if(str[l]==')' && str[r]=='('){
            l++;r--;
            count+=2;
        }
    }
    if(l==r){
        count++;
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