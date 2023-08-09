#include <iostream>

using namespace std;

int main() {

	int s;
	cin >> s ;
	if ((s>5) && (s<11)) {
		cout << "D" << "\nD" ;
	}
	else if ((s>11) && (s<17)) {
		cout << "N" << "\nR" ;
	}
	else if ((s>17) && (s<22)) {
		cout << "N" << "\nV" ;
	}
	else {
		cout << "N" << "\nN" ;
	}
	



	return 0;
}

