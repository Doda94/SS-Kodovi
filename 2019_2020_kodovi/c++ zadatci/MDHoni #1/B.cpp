#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,m,a,b,x[100005],y[100005],rj;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m >> a >> b;

for (int i = 1; i<=n;i++){
	cin >> x[i];
	if (x[i] == a){
		rj = 1;
	}
}
for (int i = 1; i<=m;i++){
	cin >> y[i];
	if (y[i] == b)
		if (rj == 1){
			rj = 2;
		}
		else 
			rj = 1;
}

if (rj >= 2)
	cout << "DA";
else 
	cout << "NE";



return 0;
}

