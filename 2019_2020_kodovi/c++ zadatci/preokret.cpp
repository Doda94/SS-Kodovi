#include <iostream>

using namespace std;
int n,k,a[2883],b[2883],c,br,br1,v;
int main () {

cin >> n;
for (int i = 0; i < n; i++){
	cin >> c;
	a[c] += 1;
}

cin >> k;
for (int i = 0; i < k; i++){
	cin >> c;
	b[c] += 1;
}

for (int i = 0; i<1440; i++){
	if (a[i] == 1){
		br++;}
}
for (int i = 0; i<1440; i++){
	if (b[i] == 1){
		br++;}
}

int t = 0;
int v = 0;

while ( br1 == 0){
	if (a[t] == 1){
		br1++ ;
		v = 1; }
	if (b[t] == 1){
		br1-- ;
		v = -1; }
	t++;
}
int pr = 0;
for (int i = t; i<2880; i++){
	if (a[i] == 1){
		br1++;
	}
	if (b[i] == 1){
		br1--;
	}
	if (br1 == 0){
		if (v == 0){
			pr++;
			v++;
		}
		if (v == 1){
			v--;
		}
		if (v == -1){
			v++;
		}
		}
	}


cout << br << "\n";
cout << pr + 1;



return 0;
}

