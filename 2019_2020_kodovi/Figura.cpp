#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;

ll s,r,re = 1, st = 1, figx [121], figy[121],done[12][12], nap, canbedone = 1;
char mat[12][12];
queue <int> x,y;

void bfs(){
	int q = x.front();
	int w = y.front();
	x.pop();
	y.pop();
	
	figx[st] = q;
	figy[re] = w;
	done[q][w] = 1;
	st++;
	re++;
	
	if (mat[q+1][w] == '#' && done[q+1][w] == 0){
		x.push(q+1);
		y.push(w);
	}
	if (mat[q-1][w] == '#' && done[q-1][w] == 0){
		x.push(q-1);
		y.push(w);
	}
	if (mat[q][w+1] == '#' && done[q][w+1] == 0){
		x.push(q);
		y.push(w+1);
	}
	if (mat[q][w-1] == '#' && done[q][w-1] == 0){
		x.push(q);
		y.push(w-1);
	}
}


void done_0 (){
	for (int i = 0; i<12; i++)
		for (int k = 0; k<12; k++)
			done[i][k] = 0;
}

void fig_l(){
	for (int i = 1; i <= st; i++)
		if (figy[i]-1 == 0)
			canbedone = 0;
	if (canbedone == 1)	{
		for (int i = 1; i <= st; i++){
			int q = figx[i];
			int w = figy[i];
			mat[q][w] = '.';
			mat[q][w-1] = '#';
			x.push(q);
			y.push(w-1);
		}
	}
}

void fig_r(){ // treba fixat
	for (int i = 1; i<=re ; i++)
		if (figy[i] + 1 > r)
			canbedone = 0;
	if (canbedone = 1)
		for (int i = re; i >= 1; i--){
		int q = figx[i];
		int w = figy[i];
		mat[q][w] = '.';
		mat[q][w+1] = '#';
		x.push(q);
		y.push(w+1);
	}
}


int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> s >> r; // s = retci , r = stupci	lol

for (int i = 1; i<=s; i++)
	for (int k = 1; k<=r; k++)
		cin >> mat[i][k];

for (int i = 1; i<=s; i++)
	for (int k = 1; k<=r; k++)
		if (mat[i][k] == '#' && nap == 0){
			x.push(i);
			y.push(k);
			nap = 1;
			break;
		}

while (!x.empty())
	bfs();

fig_l();
done_0();
while (!x.empty())
	bfs();
fig_l();


for (int i = 1; i<=s; i++){
	for (int k = 1; k<=r; k++)
		cout << mat[i][k];
cout << "\n";
}


return 0;
}

