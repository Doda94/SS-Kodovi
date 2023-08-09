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

string t;
float h,m,s;
float uk;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> t;
h=(int(t[0])-'0')*10+(int(t[1])-'0');
m=(int(t[3])-'0')*10+(int(t[4])-'0');
s=(int(t[6])-'0')*10+(int(t[7])-'0');
uk=h+(m/60)+(s/60/60);
float limit;
float xz = 40;
float xx = 60;
limit = xz/xx;

//cout << h << " "<< m<<" "<<s;
//cout << endl << uk << endl << limit<<endl;
if (uk<=limit)
	cout<< "gmail.com";
else
	cout << "skole.hr";

return 0;
}


