#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string a,b;
long long l,l1,used[1010],svi[1010],naj = 1010,zr,jed,usedi[1010];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> a >> b;

l= a.length();
l1 = b.length();

for (int i = 0; i<l1;i++){
		for (int k = 0; k<l;k++){
			if (b[i] == a[k]){
				if (used[k] == 0){
					used[k] = 1;
					svi[i]++;
					zr++;
				}
			}			
		}
}

for (int i = 0;i<l1;i++){
	for (int k = 0;k<l1;k++){
		if (i!=k && b[i] == b[k] && usedi[i] != 0 && usedi[k] != 0){
			jed++;
			usedi[i] = 1;
			usedi[k] = 1;
		}
	}
}

cout << jed << "\n";

if (jed == l1)
	cout << zr/l1;
else {
	for (int i = 0;i<l1;i++){
		naj = min (svi[i],naj);
	}
	cout << naj;
}


	
return 0;
}

