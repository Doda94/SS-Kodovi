#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
typedef long long ll;


using namespace std;

ll p,f,zad;
vector <ll> fp,ff;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> zad;
cin >> p;

for (int i = 0; i<p; i++){
	long long a;
	cin >> a;
	fp.push_back(a);
}

cin >> f;

for (int i = 0; i<f; i++){
	long long a;
	cin >> a;
	ff.push_back(a);
}

for (int i = 0; i<fp.size(); i++){
	for (int k = 0; k<ff.size(); k++){
		if (fp[i] == ff[k])
			p--;
		if (ff[k] == fp[i])
			f--;
	}
}

cout << p << endl << f;


return 0;
}

