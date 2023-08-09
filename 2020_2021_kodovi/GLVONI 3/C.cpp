#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

string s;
int n,price,ostatak;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> s >> n;

if (s == "Caj" || s == "Kava")
	price = 2;
else
	price = 3;
	
cout << n-price << endl;

n-= price;

	while (n/5 >= 1){
		ostatak++;
		n -= 5;
	}
	while (n/2 >= 1){
		ostatak++;
		n -= 2;
	}
	while (n>0){
		ostatak++;
		n -= 1;
	}



cout << ostatak;


return 0;
}

