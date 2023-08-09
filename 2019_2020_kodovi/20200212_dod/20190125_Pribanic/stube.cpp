#include<bits/stdc++.h>
using namespace std;

int n, rj = 0x3f3f3f3f;
int a[30], maks;

int solve(int hi) {
	int p[30];
	for(int i = 0; i < n; ++i) {
		p[i] = a[i];
	}

	int k = 0;
	for(int i = 1; i <= hi; ++i) {
		if(p[i - 1] >= p[i]) {
			int temp = p[i];
			p[i] = p[i - 1] + 1;
			k += p[i] - temp;
		}	
	}
	for(int i = n - 1; i > hi; --i) {
		if(p[i] >= p[i - 1]) {
			int temp = p[i - 1];
			p[i - 1] = p[i] + 1;
			k += p[i - 1] - temp;
		}
	}
/*
	for(int i = 0; i < n; ++i)
		cout << p[i] << " ";
	cout << " -> " << k;
	cout << endl;
*/
	return k;
}

int main ()
{
	ios::sync_with_stdio(0);
	
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		maks = max(maks, a[i]);
	}
	
	for(int i = 0; i < n; ++i) 
		rj = min(rj, solve(i));
	cout << rj;
return 0;
}
