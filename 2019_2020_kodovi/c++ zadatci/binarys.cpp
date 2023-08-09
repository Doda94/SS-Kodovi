#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long n,q,y[1000005],x[1000005],maxx,maxy,minx=1000005,miny;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> q;

for (int i = 0; i<n; i++){
	cin >> x[i];
	if (x[i] > maxx)
		maxx = x[i];
	if (x[i] < minx)
		minx = x[i];
}
for (int i = 0; i<q; i++)
{
	cin >> y[i];
	if (y[i] > maxy)
		maxy = y[i];
}
sort (x,x+n);
sort (y,y+q);

for (int i = 0; i<q; i++){
	if (y[i] << minx || y[i] > maxx)
	
}
	



return 0;
}

