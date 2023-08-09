#include <iostream>

using namespace std;

int main () {
	
	int k,n,x ;
	
	cin >> k >> n >> x;
	
	int a = x-k;
	int b = k+n-x;
	int c ;
	if (a>b) {
	 c = b;
	}
	else{
	 c = a;
	}
	cout << a<<"\n";
	cout << b<< "\n";
	cout << c ;
	  
	
	
	
	
	return 0;
}
