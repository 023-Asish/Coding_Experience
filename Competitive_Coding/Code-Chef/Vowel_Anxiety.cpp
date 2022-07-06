#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
ll mod = 1e9 + 7; 

bool helperfunction(char c) 
{ 
    if (c == 'e' || c == 'i' ||c == 'a' || c == 'u' || c == 'o' ) 
        return true; 
 
    return false; 
} 

void frindSolveFunction()
{
    ll n; cin >> n; 
 
 
    string str; cin >> str; 
 
    char asish[n]; 
    for(int i=0;i<n;i++) 
        asish[i]=str[i]; 
 
 
    ll j = n - 1; 
 
    while (j >= 0 && !helperfunction(str[j])) 
    { 
         
        j--; 
    } 
     
    j--; 
    ll left = 0;
    ll right=j;
    ll dipti=0;
    ll itera=j; 
   
   
    while (itera >= 0) 
    { 
        string temp; 
 
        while (itera >= 0) 
        { 
            if (helperfunction(str[itera])) 
            { 
 
                temp.push_back(str[itera]); 
                itera--; 
                break; 
            } 
            else 
                temp.push_back(str[itera]); 
 
            itera--; 
        } 
 
        if (dipti%2==1) 
        { 
            for (auto it : temp) 
            { 
                asish[right--] = it; 
            } 
        } 
        else 
        { 
            for (auto it : temp) 
            { 
                asish[left++] = it; 
                 
            } 
        } 
        dipti++; 
    } 
 
    for(auto i:asish) 
        cout<<i; 
 
    cout<<endl;  
    } 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testCases;
    cin >> testCases;
    while (testCases--)
    {
        frindSolveFunction();
    }
    return 0;
}