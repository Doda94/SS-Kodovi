#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long a,b,as[3000],bs[3000],pp,pr,preokret,vodi,pv;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a;

for (int i = 1;i<=a;i++){
	long long r;
	cin >> r;
	as[r] = 1;
	if (r<1441)
		pp++;
	
}

cin >> b; 


for (int i = 1;i<=b;i++){
	long long r;
	cin >> r;
	bs[r] = 1;
	if (r<1441)
		pp++;
	
}

for (int i = 0;i<=2880;i++){
	if (as[i] != 0 || bs[i] != 0){
		if (as[i] == 1)
			pr++;
		if (bs[i] == 1)
			pr--;
		if (pr >= 1)
			vodi = 1;
		if (pr <= -1)
			vodi = -1;
		if (pv != vodi)
			preokret++;
		pv = vodi;	
	}
}

cout << pp << endl << preokret-1;

return 0;
}

