#include <iostream>
 
using namespace std;
int x[95];
 
int main () {
char a,b,c;
int n;
cin >> a;
cin >> n;
x[(int) a] = 1;
c = a;
 
for (int i = 0; i<n ; i++){
	cin >> a >> b;
	if (b == c){
		c = a;
		if (x[(int)c]==0){
			x[(int)c]=1;
		}
	}
}
int d = 0;
for (int i = 0; i<100;i++){
	if (x[i] == 1){
		d++;
	}
}
 
 
cout << c << "\n";
cout << d;
return 0;
}
