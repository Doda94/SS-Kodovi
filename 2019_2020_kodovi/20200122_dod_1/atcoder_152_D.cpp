#include <bits/stdc++.h>

using namespace std;

int f[10][10], x, L, D, s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  for (int i = 1; i <= N; ++i){
  	x =  i;
  	D = x % 10;
  	while (x > 9)
  	  x /= 10;
  	L = x;
  	f[L][D]++;
	}
	for (int i = 1; i <= 9; ++i)
	  for (int j = 1; j <= 9; ++j)
	    s += f[i][j] * f[j][i];
		
	cout << s;

  return 0;
}

