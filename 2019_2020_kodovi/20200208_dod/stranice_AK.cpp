#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, id;
ll total_sum;
vector<deque<int> > triangle;
string s;

void del_A() {
	for(int i=0;i<int(triangle.size());i++)
		if(!triangle[i].empty()) {
			total_sum -= triangle[i].front();
			triangle[i].pop_front();
		}
}

void del_B() {
	for(int i=0;i<int(triangle.size());i++)
		if(!triangle[i].empty()) {
			total_sum -= triangle[i].back();
			triangle[i].pop_back();
		}
}

void del_C() {
	deque<int> curr = triangle.back();
	triangle.pop_back();
	while(!curr.empty()) {
		total_sum -= curr.back();
		curr.pop_back();
	}
}

int main() {
	
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	
	cin >> n >> s;
	
	for(int i=1;i<=n;i++) {
		deque<int> row;
		for(int j=0;j<i;j++) {
			row.push_back(++id);
			total_sum += row.back();
		}
		triangle.push_back(row);
	}
	
	for(int i=0;i<n-1;i++) {
		if(s[i]=='A') del_A();
		if(s[i]=='B') del_B();
		if(s[i]=='C') del_C();
		cout << total_sum << "\n";
	}
	
	return 0;
}
