#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>

typedef long long ll;
using namespace std;

int pot (ll q, ll w){
	ll qw = q;
	q = 1;
	for (int i = 0; i<w; i++)
		q*= qw;
	return q;
}

ll n,t[15],h = 12, m= 0;
string predmet[15],rj;
stringstream ss,sb;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;

for (int i = 0; i<n; i++)
	cin >> predmet [i] >> t[i];
	
for (int i = 0; i<n; i++){
	ss.str("");
	ss << h;
	string a = ss.str();
	ss.str("");
	ss << m;
	string b = ss.str();
	if (m < 10){
		rj += a;
		rj += ":";
		rj += "0";
		rj += b;
		}	
	else{
		rj += a;
		rj+=":";
		rj += b;
	}
	m+= t[i];
	while (m >= 60){
		m-=60;
		h++;
	}
	cout << rj << " " << predmet[i]<< "\n";
	rj = "";
}


return 0;
}

