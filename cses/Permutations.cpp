#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>

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

ll n;
string s;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

if (n<=3 && n!=1){
    cout << "NO SOLUTION";
    return 0;
}
for (int i = 1;i<=n;i++){
    if (i%2==0)
        cout << i << " ";

    else
        s+= to_string(i)+" ";
}

cout << s;




return 0;
}
