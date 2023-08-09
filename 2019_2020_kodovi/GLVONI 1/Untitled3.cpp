#include <iostream>

using namespace std;
long long c;
int br(long long pr){
	long long y = pr;
	while (y > 0){
		 y = y/10;
		 c++;
	}

}

int main () {


int y;
cin >> y;

br(y);
cout << c;



cout << c;
return 0;
}

