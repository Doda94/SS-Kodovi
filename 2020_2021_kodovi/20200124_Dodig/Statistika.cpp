#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long n,v[50],r,bro;
string s[50];
vector <string> dat;
vector <int> vel;
vector <int> br;
vector <int> raz;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n; i++){
	cin >> s[i] >> v[i];
	r = 0;
	bro++;
	long long c = s[i].size();
	string str = s[i];
	long long toc = 0;
	for (int k = 0; k<c; k++)
		if (str[k] == '.'){
			toc = k;
			break;
		}
	for (int k = 0; k<c; k++)
		if (str[k] == '/')
			r++;
	
	string datoteka;
	for (int k = toc; k<c;k++){
		datoteka.push_back(str[k]);
	}
	int done = 0;
	for (int k = 0; k<dat.size(); k++){
		if (dat[k] == datoteka && raz[k] == r){
			vel[k] += v[i];
			br[k]++;
			done = 1;
		}
	}
	if (done == 0){
	dat.push_back(datoteka);
	vel.push_back(v[i]);
	br.push_back(1);
	raz.push_back(r);
	}
}
int k = 0;
int postoji = 0;
for (int q = 0; q<bro; q++){
postoji = 0;
for (int i = 0; i<raz.size(); i++){
	if (raz[i] == k){
	postoji = 1;
	cout << raz[i]-1 << endl ;
	break;
	}
}
for (int i = 0; i<raz.size(); i++){
	if (raz[i] == k && postoji == 1)
		cout << dat [i] << " " << vel[i]<< endl;		
}
k++;
}



return 0;
}

