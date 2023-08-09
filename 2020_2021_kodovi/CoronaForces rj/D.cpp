#include<iostream>
#include<vector>
#include<queue>
#include<map>
#define MAX 200005
#define fast_input ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int visited[MAX];
map<string, int> mapCompress;
vector<int> adj[MAX];
queue<int> Queue;
queue<int> Infected;
int nCompress;
 
int main() {
 
	fast_input;
 
	int n, m, k;
	cin >> n >> m >> k;
	
	for (int i = 1; i <= n; i++) {
		string source;
		cin >> source;
		if (mapCompress[source] == 0) mapCompress[source] = ++nCompress;
		Queue.push(mapCompress[source]);
		visited[mapCompress[source]] = true;
		Infected.push(14);
	}
	
	for (int i = 1; i <= m; i++) {
		string name1, name2;
		cin >> name1 >> name2;
		if (mapCompress[name1] == 0) mapCompress[name1] = ++nCompress;
		if (mapCompress[name2] == 0) mapCompress[name2] = ++nCompress;
		adj[mapCompress[name1]].push_back(mapCompress[name2]);
		adj[mapCompress[name2]].push_back(mapCompress[name1]);
	}
 
	for (int day = 1; day <= k; day++) {
 
		cout << Infected.size() << "\n";
 
		int nSteps = Queue.size();
 
		while (nSteps--) {
			int curr = Queue.front();
			Queue.pop();
			visited[curr] = true;
			for (auto u : adj[curr]) {
				if (visited[u]) continue;
				visited[u] = true;
				Queue.push(u);
				Infected.push(14+day);
			}
		}
 
		while (!Infected.empty() && day >= Infected.front()) Infected.pop();
 
	}
 
 
	return 0;
}
