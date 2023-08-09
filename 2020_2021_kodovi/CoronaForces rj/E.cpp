#include<iostream>
#include<vector>
#include<queue>
#include<map>
#define MAX 1000005
#define fast_input ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int divisors[MAX];
 
 
int main() {
 
	fast_input;
 
	for (int i = 2; i <= MAX; i++)
		for (int j = 2*i; j <= MAX; j += i)
			divisors[j]++;
 
	int q, l, r, k;
 
	cin >> q;
 
	for (int i = 0; i < q; i++) {
		cin >> l >> r >> k;
		int seq = 0;
		int sol = 0;
		for (int j = l; j <= r; j++)
			if (divisors[j] >= k) seq++;
			else { sol = max(sol, seq); seq = 0; }
		cout << max(sol, seq) << "\n";
	}
 
 
	return 0;
}
