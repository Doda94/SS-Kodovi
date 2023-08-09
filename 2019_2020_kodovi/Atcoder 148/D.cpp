#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,a[200005],rj[200005],sl,najm,k=1;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n ;i++){
	cin >> a[i];
	rj[a[i]]++;
}

//sort (a,a+n);

for (int i = 0;i<n;i++){
	if ( a[i] == k){
		sl++;
		k++;
	}
}

if (sl != 0)
	cout << n-sl;
else
	cout << -1;

return 0;
}

