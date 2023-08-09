#include <iostream>
#define M 1000000007

using namespace std;

int n;
long long dp[100003] = {0, 1, 2, 4, 8};

int main()
{
  cin >> n;
  for (int i = 5; i <= n; ++i)
    dp[i] = (dp[i - 1] % M + dp[i - 2] % M + dp[i - 3] % M
	+ dp[i - 4] % M) % M; 
	
  cout << dp[n];
  return 0;
}

