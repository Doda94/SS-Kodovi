#include <iostream>

using namespace std;

int main() {
int x,y,a,b,n,p;
cin >> x >> y;
cin >> n ;
for (int i = 0; i<n; i++){
	cin >> a >> b;
	if (b > y){
		p++;	
	}
	if (b == y){
		if (a>x){
			p++;
		}
		if (a==x && b==y){
			p++;
		}
	}
}		
cout << p;	
return 0;
}
