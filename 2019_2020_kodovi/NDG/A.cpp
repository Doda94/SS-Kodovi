#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

vector <string> a;
ll b;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> b;

for (int i = 0; i<b; i++){
	string qw;
	cin >> qw;
	a.push_back(qw);
	cin >> qw;
	a.push_back(qw);
	cin >> qw;
	a.push_back(qw);
}

string rj[5];
rj[0] = a[0];
rj[1] = a[1];
rj[2] = a[2];

sort (rj,rj+3);

for (int i = 0; i<b; i++){
	cout << rj[0] <<" " << rj[1] << " " << rj[2] << endl;
}



return 0;
}

