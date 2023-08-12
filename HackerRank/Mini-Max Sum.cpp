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

ll arr[5],a,b;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

fr(5)
	cin >> arr[i];
sort(arr,arr+5);

fr(4)
	a+=arr[i];
for (int i = 1;i<5;i++)
	b+=arr[i];
	
cout << a << " " << b ;



return 0;
}


