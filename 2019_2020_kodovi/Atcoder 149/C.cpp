#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long x,rj;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> x;

long long i = x;

if (x==2 || x==3 || x==5 || x==7){
	cout << x;
	return 0;
}

while (rj==0){	
	if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
		long long dj = 0;
		for (int k = 1;k<=i;k++){
			if (i%k==0)
				dj++;
		}
		if (dj == 2)
			rj = i;
	}
i++;
}

cout << rj;



return 0;
}

