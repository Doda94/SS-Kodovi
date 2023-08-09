#include <iostream>

using namespace std;

long long a,zr;
int c = 0;


int main () {

cin >> a;
long long pr = a;
long long pr1 ;

while (pr != 1 || pr != 4){
pr1 = pr;
pr = 0;
	while (pr1 > 0){
		zr = (pr1%10) * (pr1%10);
//		cout << zr;
		pr += zr;
		pr1 = pr1/10;
	}

if (pr == 4){
	cout << "Nesretan";
	break;
}
else if (pr == 1) {
	cout << "Sretan";
	break;
}

}
		


//cout << br(pr);
return 0;
}

