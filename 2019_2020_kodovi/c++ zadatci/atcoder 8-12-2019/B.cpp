#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string s;
long long l,c,r,i;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> s;

l= s.length();
c = l-1;

for (int i = 0; i<c; i++){
	if (i>=c-i)
		break;
	if (s[i] != s[c-i]){
		r++;
	}
	
}

cout << r;

return 0;
}

