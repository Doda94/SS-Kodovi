#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string a;

cin >> a;
int naj;
int l = a.length();

for (int i = 0; i<l; i++){
	int pr;
	if (int(a[i]) - '0' > 9){
		pr = int(a[i] - 54);
		if (pr > naj)
			naj = pr;
	}
	else 
		if (int(a[i] - '0' > naj))
			naj = int(a[i]) - '0';
}

if (naj < 10)
	cout << naj+1;
else 
	cout << naj;


return 0;
}

