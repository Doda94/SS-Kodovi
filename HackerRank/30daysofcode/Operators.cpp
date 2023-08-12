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

double mealCost,tipPercent,taxPercent;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> mealCost >> tipPercent >> taxPercent;

double rj;
rj=mealCost;
rj+=(tipPercent/100)*mealCost;
rj+=(taxPercent/100)*mealCost;
rj=round(rj);
cout << rj;



return 0;
}
