#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int n,m,f[10005],brp,br,st;
char ss[10005], s[105][105];
queue <int> qu;

int bfs(){
	int qw = qu.front();
	qu.pop();
	if (ss[qw+1] == '*' && f[qw+1] == 0)
		qu.push(qw+1);
	else if (ss[qw+m] == '*' && f[qw+m] == 0)
		qu.push(qw+m);
	else if (ss[qw-m] == '*' && f[qw-m] == 0)
		qu.push(qw-m);		
	else if (ss[qw-1] == '*' && f[qw-1] == 0)
		qu.push(qw-1);

	f[qw]++;
	
	while (!qu.empty())
		return bfs();
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;		// n = stupac | m = redak 

for (int i = 1; i<=n; i++)
	for (int k = 1; k<=m; k++) { // i = stupac | k = redak 
		cin >> s[i][k];
		ss[m*(i-1)+k] = s[i][k];
	}

for (int i = 1; i<=n; i++)
	for (int k = 1; k<=m; k++){			
			if (ss[m*(i-1)+k] == '*' && f[m*(i-1)+k] == 0){
				qu.push(m*(i-1)+k); 
//				cout << m*(i-1)+k << endl;
				bfs();
//				if (qu.empty())
					brp++;
			}
		}
	


cout << brp;

return 0;
}

