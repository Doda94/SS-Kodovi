#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

char s[25];
long long mask[25],naj,zr;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

for (int i = 1; i<=n;i++)
	cin >> s[i];

for (int i = 1; i<=pow (2,n);i++){
	int x = i;
	for (int maska = 1; maska<=20;maska++){
		mask[maska] = x%2;
		x /= 2;
	}
	zr = 0;
	for (int k = 1; k<n; k++){
		if (mask[k] == 1){
			int l = k+1;
			while (mask[l] != 1)
				l++;
			if (s[k] == s[l])
				zr++;
			
				
		}
	}
	if (zr>naj)
		naj = zr;
//	cout << naj;
}



if (naj==0)
	cout << n-1;
else{
	naj--;
	cout << n-naj;
}
return 0;
}

