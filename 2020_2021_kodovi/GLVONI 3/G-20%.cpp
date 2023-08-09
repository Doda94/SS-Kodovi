#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long n,opis[1010],bodovi[1010],rj;


int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n; i++)
	cin >> opis[i];
for (int i = 0; i<n; i++)
	cin >> bodovi[i];
	
for (int i = 0; i<n; i++){
	if (bodovi[i] == opis[i])
		rj+= bodovi[i];
}

cout << rj;



return 0;
}

