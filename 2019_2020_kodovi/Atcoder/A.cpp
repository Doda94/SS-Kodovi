#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long h,w,n,uk,veci,manji,ob,br;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> h >> w >> n;

uk  = h*w;

if (h>w)
	veci = h;
else 
	veci = w;
	
if (h<w)
	manji = h;
else 
	manji = w;
	
while (ob < n && uk/veci > 0){
	ob+= veci;
	uk -= veci;
	br++;
}
while (ob < n && uk/manji > 0){
	ob+= manji;
	uk -= manji;
	br++;
}

cout << br;
return 0;
}

