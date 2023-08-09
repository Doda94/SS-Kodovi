#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string a,b;
long long broji[30],l,l1,broji1[30],zr=1010;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;
l = a.length();
l1 = b.length();

for (int i = 0 ;i<l;i++){
	broji[a[i]-'a']++;
}
for (int i = 0 ;i<l1;i++){
	broji1[b[i]-'a']++;
	long long n = broji[b[i]-'a'] / broji1[b[i]-'a'];
	zr = min (zr,n);
}

cout << zr;
	
return 0;
}

