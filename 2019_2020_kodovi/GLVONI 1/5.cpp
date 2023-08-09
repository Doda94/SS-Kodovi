#include <iostream>

using namespace std;

long long n,k,m,c[100003],a[100003],pr;


int main () {

cin >> n >> k >> m;

for (int i = 1; i<=n ; i++){
	cin >> c[i];
}
for (int i = 1; i<=n ; i++){
	cin >> a[i];
}
pr = 0;
int k1 = k;
while (k<=n){
	k = k+a[k];
	pr += c[k];
	m--;
	if (m == 0){
		break;
	}	
}


cout << pr ;
return 0;
}

