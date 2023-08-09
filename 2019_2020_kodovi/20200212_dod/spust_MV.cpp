#include <bits/stdc++.h>
using namespace std;
long long n, m, k, v[1005][1005], sol[1005][1005], ans[1000005];
struct vrh{long long x, y, dulj, visina;} t[1000005]; 
bool msf(vrh a, vrh b){return a.visina>b.visina;}
int main (){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
cin >> n >> m >> k;
for (int i=0; i<n; i++){
	for (int j=0; j<m; j++){
		cin >> t[i*m+j].visina;
		t[i*m+j].x=i+1; t[i*m+j].y=j+1;
	}
} sort(t, t+n*m, msf);
for (int i=0; i<n*m; i++){
	v[t[i].x][t[i].y]=t[i].visina;
	if (v[t[i].x-1][t[i].y]!=v[t[i].x][t[i].y]) sol[t[i].x][t[i].y]=max(sol[t[i].x-1][t[i].y]+1, sol[t[i].x][t[i].y]);
	if (v[t[i].x+1][t[i].y]!=v[t[i].x][t[i].y]) sol[t[i].x][t[i].y]=max(sol[t[i].x+1][t[i].y]+1, sol[t[i].x][t[i].y]);
	if (v[t[i].x][t[i].y-1]!=v[t[i].x][t[i].y]) sol[t[i].x][t[i].y]=max(sol[t[i].x][t[i].y-1]+1, sol[t[i].x][t[i].y]);
	if (v[t[i].x][t[i].y+1]!=v[t[i].x][t[i].y]) sol[t[i].x][t[i].y]=max(sol[t[i].x][t[i].y+1]+1, sol[t[i].x][t[i].y]);
	t[i].dulj = sol[t[i].x][t[i].y]; ans[t[i].visina]=max(ans[t[i].visina], t[i].dulj);
}
for (int i=1000000; i>=0; i--) ans[i]=max(ans[i], ans[i+1]);
for (int i=1; i<=k; i++) cout << ans[i] << endl;
return 0;
}
