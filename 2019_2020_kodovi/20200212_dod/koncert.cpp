#include <bits/stdc++.h>

using namespace std;

int a[46][6], b[46][6], n, sumx, brparx, sumy, brpary, x[5], y[5], sum, t;
long long sola, solb;
string s;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  cin >> n;
  cin >> s;
  int g = 1;
  for(int i = 1; i <= n; ++i)
	  g *= 10;
	for(int i = 0; i < n; ++i)
	  if ('0' <= s[i] and s[i] <= '9')
		  x[i] = s[i] - '0';
		else
	    x[i] = -1;
	for(int i = 0; i < n; ++i)
	  if ('0' <= s[i + n] and s[i + n] <= '9')
	    y[i] = s[i + n] - '0';
	  else
	    y[i] = -1;
	
	for (int i = 0; i < g; ++i){
		sum = 0;
		brparx = 0;
		t = i;
		int ok = 1;
		for (int j = n - 1; j >= 0; --j){
			int znam = t % 10;
			sum += znam;
			if (znam % 2 == 0) brparx++;
			if (x[j] >= 0 and znam != x[j]) ok = 0;
			t = t / 10;			
		}
		if (!ok) continue;
		a[sum][brparx]++;		
	}
 
  for (int i = 0; i < g; ++i){
		sum = 0;
		brpary = 0;
		t = i;
		int ok = 1;
		for (int j = n - 1; j >= 0; --j){
			int znam = t % 10;
			sum += znam;
			if (znam % 2 == 0) brpary++;
			if (y[j] >= 0 and znam != y[j]) ok = 0;
			t = t / 10;			
		}
		if (!ok) continue;
		b[sum][brpary]++;		
	}
	
	for (int i = 0; i <= 45; ++i){
		long long sumauk = 0;
		for (int j = 0; j <= 5; ++j)
			sumauk += a[i][j];
		long long sumbuk = 0;
		for (int j = 0; j <= 5; ++j)
		  sumbuk += b[i][j];
		sola += sumauk * sumbuk;
	}
	
	for (int i = 0; i <= 45; ++i){
		for (int j = 0; j <= 5; ++j)
		  solb += a[i][j] * b[i][j];
	}
	
	cout << sola << '\n' << solb;
	
  return 0;
}

