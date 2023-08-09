#include <iostream>

using namespace std;

int main () {

long long n,rj;
cin >> n;
long long a1 = n/1;
long long a2 = n/2;
long long a3 = n/n;
if (n==1){
	cout << 1;
}
else if (n==2){
	cout << 2;
}
else{
	cout << a1+a2+a3;
}

return 0;
}

