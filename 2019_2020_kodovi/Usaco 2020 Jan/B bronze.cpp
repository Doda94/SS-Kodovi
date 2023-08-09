#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n,a[1005],rj[1005];

int main () {
//  freopen( "photo.in", "r", stdin );
//  freopen( "photo.out", "w", stdout );	
	
ios_base::sync_with_stdio(false);
cin.tie(NULL);	  cout.tie(NULL);

cin >> n;

for (int i = 0; i<n-1; i++)
	cin >> a[i];
for (int i = 0; i<n; i++){
	rj[i] = a[i] + a[i+1];
	cout << a[i] << " + " << a[i+1] << " = " << rj [i] << " "  << endl;
}






return 0;
}

