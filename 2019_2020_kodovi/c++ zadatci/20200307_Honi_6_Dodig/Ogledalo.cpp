#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll razmak;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
getline (cin,s);

ll c = s.length();

for (int i = 0; i<c; i++){
	if (s[i] == ',')
		razmak = i+1;
}
razmak++;
while (razmak != 0){
	cout << s[razmak];
	razmak++;
	if (s[razmak] == '?')
		razmak = 0;
}

//cout << razmak;
return 0;
}

