#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long k,gl[105],pr;
double n,pol;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

for (int i = 1;i<=n;i++){
	pr = 0;
	cin >> pr;
	gl[pr]++;
}

pol = n/2;


	if (gl[1] >= pol)
		cout << "DA";
	else
		cout << "NE";


return 0;
}

