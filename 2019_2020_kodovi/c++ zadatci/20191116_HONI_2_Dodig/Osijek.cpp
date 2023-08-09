#include <iostream>

using namespace std;

int main() {

int n,k,p;

cin >> n >> k;

while (n>0){
	p++;
	n -= k;	
}

cout << p;

return 0;
}

