#include <bits/stdc++.h>
using namespace std;

long long helper(long long number,long long asish){
    long long res = 1;
    while(asish){
        if(asish&1){
            res*=number;
            res%=1000000007;
        }
        number = number*number;
        number %= 1000000007;
        asish >>= 1;
    }
    return res;
}

int main() {
	long long testcases;
    cin>>testcases;
	while(testcases--){
	    long long n,x;
        cin>>n>>x;
	    long long ans=1;

	    if(n==1) ans = 1;
	    else{
	        ans = helper(2,n-1);
	    }
	    ans *= x;
	    ans %= 1000000007;
	    cout<<ans<<endl;
	}
	return 0;
}