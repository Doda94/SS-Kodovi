#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

string a,b;
ll f[500],f1[500],krivo;
bool rj;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;

for (int i = 0; i<a.length(); i++)
	f[int(a[i])]++;

for (int i = 0; i<b.length(); i++)
	f1[int(b[i])]++;

for (int i = 0; i<500; i++)
	if (f[i] != f1[i])
		krivo++;

if (krivo == 0)
	cout << 1;
else 
	cout << 0;
return 0;
}

