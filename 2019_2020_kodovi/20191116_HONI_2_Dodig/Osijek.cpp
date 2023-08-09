#include <iostream>

using namespace std;
int n,k,p = 0;

int main() {



cin >> n >> k;

while (n>0){
	p++;
	n -= k;	
}

cout << p;

return 0;
}

