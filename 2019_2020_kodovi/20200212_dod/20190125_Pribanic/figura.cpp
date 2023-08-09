#include<bits/stdc++.h>
using namespace std;
int r, s, w;
char p[12][12];
vector<int> fig;

struct struktura {
	int br;
	char v[12][12] = {{0}};
} rj[20];

void solve(int poc, int brojac) {
	
	char kop[12][12];
	for(int i = 0; i < r; ++i) 
		for(int j = 0; j < s; ++j) 
			kop[i][j] = p[i][j];
	int temp = 0;
	for(int i = 0; i < s; ++i) {
		if(kop[0][i] != '#') continue;
		int k = 0;
		while(k <= fig[temp] and k < r) {
			kop[k][i] = '.';
			++k;
		}
		++temp;	
	}
	
	int spusti = 0x3f3f3f3f;
//	cout << "solve pozvan za " << poc << endl;
	for(int i = poc; i < poc + w; ++i) {
		int l = fig[i - poc] + 1;
//		cout << "nakon figure, tocke ponovo pocinju na indeksu " << l << endl;
		while(kop[l + 1][i] == '.') ++l;
//		cout << "# opet pocinje na idneksu " << l << endl;
		spusti = min(spusti, l - fig[i - poc]);
//		cout << spusti << endl;
	}
	
	for(int i = poc; i < poc + w; ++i) {
		int k = spusti;
		while(k <= fig[i - poc] + spusti and k < r) {
			kop[k][i] = '#';
			++k;
		}
	}
/*
	cout << "polje kop" << endl;
	for(int i = 0; i < r; ++i) {
		for(int j = 0; j < s; ++j)
			cout << kop[i][j];
		cout << endl;
	}
*/
	for(int i = 0; i < r; ++i)
		for(int j = 0; j < s; ++j)
			rj[brojac].v[i][j] = kop[i][j];
	int rjbr = 0;
	
	for(int i = poc; i < poc + w; ++i) {
		int k = 0;
//		cout << "promatarm stupac " << i << endl;
		while(kop[k + 1][i] == '.' and k < r) {
//			cout << "na indeksu " << k << " je tocka pprije nego sto naidem na prvi #" << endl;
			++k;
		}
		while(kop[k + 1][i] == '#' and k < r) {
//			cout << "naisla sam na #, indeks " << k << endl;
			++k;
		}
		while(kop[k + 1][i] == '.' and k < r) {
			++k; ++rjbr;
		}
	}
	rj[brojac].br = rjbr;
//	cout << rjbr << endl;
}

int main ()
{
	ios::sync_with_stdio(0);
	
	cin >> r >> s;
	for(int i = 0; i < r; ++i)
		for(int j = 0; j < s; ++j)
			cin >> p[i][j];
	
	for(int i = 0; i < s; ++i) 
		if(p[0][i] == '#') ++w;
	
	for(int i = 0; i < s; ++i) {
		if(p[0][i] != '#') continue;
		int k = 0;
		while(p[k + 1][i] == '#') ++k;
		fig.push_back(k);
	}
	
	int brojac = -1;
	for(int i = 0; i <= s - w; ++i) 
		solve(i, ++brojac);
	
//	cout << "brojac " << brojac << endl;
	
	int mini = 0x3f3f3f3f, minind;
	for(int i = 0; i <= brojac; ++i) {
		if(rj[i].br < mini) {
			mini = rj[i].br;
			minind = i;
		}
	}
	
	for(int i = 0; i < r; ++i) {
		if(i) cout << endl;
		for(int j = 0; j < s; ++j)
			cout << rj[minind].v[i][j];
	}

return 0;
}
