#include <iostream>
#include <cstring>
#define M 1000000007

using namespace std;

int n;
long long dp[100003];

long long f(int k){
  if (k < 0) return 0;
  if (k == 0) return 1;
  if (dp[k] != -1) return dp[k];
  dp[k] = (f(k - 1) % M + f(k - 2) % M + f(k - 3) % M + 
  f(k - 4) % M) % M;
  return dp[k];
}

int main()
{
  memset(dp, -1, sizeof dp);
  cin >> n;
  cout << f(n);


  return 0;
}

