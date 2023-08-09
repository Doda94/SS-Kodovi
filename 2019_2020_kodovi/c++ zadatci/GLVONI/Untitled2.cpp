#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;	
	long long dp[n+1];
	dp[1]=1; dp[2]=2;
	dp[3]=4; dp[4]=8;
	for (int i=5; i<=n; i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
		dp[i]=dp[i]%1000000007;
	}
	cout << dp[n];	
return 0;
}
