#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll n,a;
vector <ll> p,np;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
for (int i = 0; i<n; i++){
	cin >> a;
	if (a%2==0)
		p.push_back(a);
	else
		np.push_back(a);
}

sort (p.begin(),p.begin()+p.size());
sort (np.begin(),np.begin()+np.size());

ll rez = 0;
if (p.size() > np.size()){
	rez = 2;
	for (int i = 0; i<p.size(); i++)
		if (p[i] == rez)
			rez += 2;
		else if (p[i] > rez)
			break;
}
else{
	rez = 1;
	for (int i = 0; i<=np.size(); i++)
		if (np[i] == rez)
			rez += 2;
		else if (np[i] > rez)
			break;
}

cout << rez;

return 0;
}

