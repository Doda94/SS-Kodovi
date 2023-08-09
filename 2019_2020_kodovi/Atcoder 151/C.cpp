#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,m,p[100005],br,rj,cr;
string s[100005];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m;

for (int i = 1;i<=m;i++)	
	cin >> p[i] >> s[i];

for (int i = 1;i<=n;i++){
//	cout << i << endl;
	for (int k = 1;k<=m;k++){
		int brk = 0;
//		cout << p[k] << s[k] << endl;
		if (p[k] == i){
			if (s[k] == "WA")
				br++;
			else if (s[k] == "AC"){
				cr++;
				brk = 1;
			}
		}
		if (brk == 1)
			break;
	}
}





cout << cr << " " << br;


return 0;
}

