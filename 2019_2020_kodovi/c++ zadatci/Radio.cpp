#include <iostream>

using namespace std;

int main() {

int n,x,a,b,p,r;

cin >> n >> x ;

for (int i = 0; i<n; i++){
	cin >> a >> b;
	x += b;
	x -= a;
	if (x<0){
		x = 0;
	}
}

cout << x;

return 0;
}

