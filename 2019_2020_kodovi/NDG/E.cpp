#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
typedef long long ll;

ll n,m,xc,yc,v[1005][1005],put,rj=999999,hx,hy;
char mat[1005][1005];
queue <ll> q,w,xs;

int bfs(){
	int x = q.front();
	int y = w.front();
	put = xs.front()+1;
//	cout << x << " " << y << " " << put << endl;
	q.pop();
	w.pop();
	xs.pop();
	v[x][y] = 1;
	if (mat[x][y+1] == '.' && v[x][y+1] == 0){
		q.push(x);
		w.push(y+1);
		xs.push(put);
	}
	if (mat[x][y-1] == '.' && v[x][y-1] == 0){
		q.push(x);
		w.push(y-1);
		xs.push(put);
	}
	if (mat[x+1][y] == '.' && v[x+1][y] == 0){
		q.push(x+1);
		w.push(y);
		xs.push(put);
	}
	if (mat[x-1][y] == '.' && v[x-1][y] == 0){
		q.push(x-1);
		w.push(y);
		xs.push(put);
	}
	
	if (mat[x][y+1] == 'H')
		if (put < rj && put != 0)
			rj = put;
	
	if (mat[x][y-1] == 'H' && put != 0)
		if (put < rj)
			rj = put;
	
	if (mat[x+1][y] == 'H' && put != 0)
		if (put < rj)
			rj = put;
	
	if (mat[x-1][y] == 'H' && put != 0)
		if (put < rj)
			rj = put;
			
	while (!q.empty())
		return bfs();
		
}


int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;

for (int i = 0; i<n; i++)
	for (int k = 0; k<m; k++){
		cin >> mat[i][k];
		if (mat[i][k] == 'C'){
			xc = i;
			yc = k;
		}
		if (mat[i][k] == 'H'){
			hx = i;
			hy = k;
		}
	}

q.push(xc);
w.push(yc);
xs.push(put);

bfs();
if ( (mat[hx+1][hy] != '.' && (mat[hx+1][hy] == '\0' || mat[hx+1][hy] == '#')) && (mat[hx-1][hy] != '.' && (mat[hx-1][hy] == '\0' || mat[hx][hy+1] == '#')) && (mat[hx][hy+1] != '.' && (mat[hx][hy+1] == '\0' || mat[hx][hy+1] == '#')) && (mat[hx][hy-1] != '.' && (mat[hx][hy-1] == '\0' || mat[hx][hy-1] == '#')))
	cout << -1;
else
if (rj != 999999)
	cout << rj;
else
	cout << -1;

return 0;
}

