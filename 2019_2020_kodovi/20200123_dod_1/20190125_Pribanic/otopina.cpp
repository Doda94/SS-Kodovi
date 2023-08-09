#include<bits/stdc++.h>
using namespace std;

int n;
int a[5];
int k[5];

int main ()
{
	ios::sync_with_stdio(0);
	
	cin >> n;
	for(int i = 0; i < 3; ++i)
		cin >> a[i];
	for(int i = 0; i < 3; ++i)
		cin >> k[i];
	
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			if(i == j) continue;
			//prelijevamo iz i u j
			int temp1 = k[i];
			int temp2 = k[j];
			temp2 += k[i];
			temp2 = min(temp2, a[j]);
			temp1 -= (temp2 - k[j]);
			if(temp1 == n or temp2 == n) {
				cout << i + 1 << " " << j + 1;
				return 0;
			}
		}
	}
	
	cout << 0;

return 0;
}
