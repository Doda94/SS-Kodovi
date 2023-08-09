#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,a[100005],raz,najz=1000000001;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
cin >> a[0];
for (int i = 1;i<n;i++){
	cin >> a[i];
	if (a[i] < a[i-1])
		raz = a[i-1]-a[i];
	if (a[i] > a[i-1])
		raz = a[i]-a[i-1];
	if (raz < najz)
		najz = raz;
	
	
}

cout << najz;

return 0;
}

