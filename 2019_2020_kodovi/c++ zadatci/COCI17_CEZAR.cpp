#include <iostream>

using namespace std;


int k[20];
int main () {

int N,y,n;
int a = 0;
int u = 0;
int x = 0;
cin >> N ;

for (int i = 2; i<14;i++){
	k[i] = 4;
}

for (int i = 0; i<N ; i++){
	cin	>> n;
	x += n;
	k[n] -= 1;
}

y = 21 - x ;

for (int i = y;i<14;i++){
	u += k[i];
}

for (int i = 0;i<y+1;i++){
	a += k[i];
}

if (u>a) {
	cout << "DOSTA";
}
else{
	cout << "VUCI";
}

return 0;
}

