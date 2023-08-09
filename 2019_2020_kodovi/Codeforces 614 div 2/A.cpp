#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long t,n,s,k,rj[1010];
int kat[1010] = {0};

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> t;

for (int i = 0; i<t; i++){
	for (int p = 0; p<1011;p++)
		kat[p] = 0;
	int cs;
	cin >> n >> s >> k;
	for (int c = 0; c<k; c++){
		cin >> cs;
		kat[cs] = 1;
	}
	for (int c = s; c<n; c++){
		if (kat[c] == 0){
			rj[i] = c-s;
			break;
		}
	}
	for (int c = s; c>0; c--){
		if (kat[c] == 0){
			if (s-c < rj[i])
				rj[i] = s-c;
			break;
		}
	}
}
	
for (int i = 0; i<t; i++)
	cout << rj[i] << "\n";

return 0;
}

