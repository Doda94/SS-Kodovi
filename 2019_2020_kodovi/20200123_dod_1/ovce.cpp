//http://hsin.hr/zup05/zadaci/srednjoskolska_skupina/prva_podskupina/zadaci.pdf
#include <bits/stdc++.h>
using namespace std;
char mm[250][250];
short int v[250][250];
int n,m,ovce, vukovi, u_ovce, u_vukovi;
stack<int> sx; stack<int> sy;
int ok(int x,int y){
	if (x>=n or x<0 or y>=m or y<0) return 0;
	else return 1;
}
void dfs(int x,int y){
	v[x][y] = 1; sx.push(x); sy.push(y); 
	while (!sx.empty()){
		x=sx.top();
		y=sy.top();
		v[x][y] = 1;
		if (ok(x+1,y) and !v[x+1][y]) {sx.push(x+1); sy.push(y); continue;}
		if (ok(x-1,y) and !v[x-1][y]) {sx.push(x-1); sy.push(y); continue;}
		if (ok(x,y+1) and !v[x][y+1]) {sx.push(x); sy.push(y+1); continue;}
		if (ok(x,y-1) and !v[x][y-1]) {sx.push(x); sy.push(y-1); continue;}
		if (mm[x][y]=='o') ovce++;
		if (mm[x][y]=='v') vukovi++;
		sx.pop(); sy.pop();
	}
	return;	
}

int main (){
ios::sync_with_stdio(0);
cin.tie(0);
	cin >> n >> m;
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> mm[i][j];
			if (mm[i][j]=='#') v[i][j]=1;
		}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (v[i][j]==0){
			ovce=0; vukovi=0; dfs(i,j);
			if (ovce>vukovi) u_ovce+=ovce;
			else u_vukovi+=vukovi;
			}
		}
	}
	cout << u_ovce << " " << u_vukovi;
return 0;
}

