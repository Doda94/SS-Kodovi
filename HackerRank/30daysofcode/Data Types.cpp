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

ll a;
double b;
string c;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll i=4;
double d=4.0;
string s="HackerRank";
	
cin >> a >> b;
cin.ignore();
getline (cin,c);
cout <<a+i<<endl<<b+d<<endl<<s+c;





return 0;
}


