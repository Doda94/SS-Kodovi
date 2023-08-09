#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n;
char s[105],t[105];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1;i<=n;i++)
	cin >> s[i];
for (int i = 1;i<=n;i++)
	cin >> t[i];
	
for (int i = 1;i<=n;i++){
	cout << s[i] << t[i];
}


return 0;
}

