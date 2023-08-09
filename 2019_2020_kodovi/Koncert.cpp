#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long n,t[15],bru,rj,rjp;
char s[15];
//vector <long long> rj;

int pot (long long qw, long long we){
	int qwe = qw;
	qw = 1;
	for (int i = 0; i<we; i++)
		qw *= qwe;
	return qw;
}
int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n*2; i++){
	cin >> s[i];
	if (s[i] == '?'){
		t[i] = 11;
	}
	else {
		t[i] = s[i] - '0';
		bru++;
	}
}

for (int i = pot(10,n*2-1); i<pot(10,n*2); i++){
	vector <long long> znamenke;
	long long broj = i;
	long long zbr1 = 0;
	long long zbr2 = 0;
	long long brp1 = 0;
	long long brp2 = 0;
	long long bru1 = 0;
	while (broj > 0){
		znamenke.push_back(broj%10);
		broj /= 10;
	}
	vector <long long> znam;
	for (int i = znamenke.size()-1; i>=0; i--)
		znam.push_back(znamenke[i]);
	for (int k = 0; k<n; k++){
		if (znam[k] % 2 == 0)
			brp1++;
		if (t[k] == 11)
			zbr1+= znam[k];
		else if (t[k] == znam[k]){
			zbr1+= znam[k];
			bru1++;
		}
		else {
			zbr1 = -1;
			break;
		}
	}
	
	for (int k = n; k<n*2; k++){
		if (znam[k] % 2 == 0)
			brp2++;
		if (t[k] == 11){
			zbr2+= znam[k];
		}
		else if (t[k] == znam[k]){
			zbr2+= znam[k];
			bru1++;
		}
		else {
			zbr2 = -1;
			break;
		}
	}
	
//	cout << zbr1 << " " << zbr2<< endl;
	
	if ((zbr1 == zbr2 && zbr1 != -1 && zbr2 != -1) || bru1 == bru){
//		cout << i << endl;
		rj++;
		if (brp1 == brp2)
			rjp++;
	}
}


cout << rj << endl << rjp;

return 0;
}

