#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

ll n,arr[100][100];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

fr(n)
	for (int j = 0;j<n;j++)
		cin >> arr[i][j];

ll x = 0,y=0,sa=0,sb=0; // sum-a
while (x<n && y<n){
	sa+=arr[x][y];
	x++;
	y++;
//	cout << sa << endl;
}
x = 0;
y--;
//cout << arr [x][y];
while (x<=n && y>=0){
	sb+=arr[x][y];
	x++;
	y--;
//	cout << sb << endl;
}

cout << abs(sa-sb);

return 0;
}


