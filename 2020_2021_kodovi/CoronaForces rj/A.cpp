#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    int h = 12; int m = 0;
    
	for (int i = 0; i < n; ++i){
    	string s; cin >> s;
    	int t; cin >> t;
    	
		cout << h << ':'; 
		if (m < 10) cout << 0; 
		cout << m << ' ';
    	cout << s << '\n';
    
		m += t;
    	h += m / 60;
    	m %= 60;
	}
	
    return  0;
}
