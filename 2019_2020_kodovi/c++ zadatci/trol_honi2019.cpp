#include <iostream>

using namespace std;

int a,b,q,sum[101],t,s,s1;

int main () {

cin >> q;

for (int i = 0; i < q ; i++ ){
	
	cin >> a >> b;
	
	for (int k = a; k<=b ; k++){
		t = k;
		s = 0;
		while (t != 0){
			s += t%10;
			t = t/10;
			}
		while (s >= 10){
			s1 = s;
			s = 0;
			s += s1%10;
			while (s1 >= 10){
				s1 = s1/10;
				s += s1%10;
			}	
		}
		sum[i] += s;
	} 
}
for (int i = 0; i<=q ; i++){
	if (sum[i] != 0){
		cout << sum[i] << "\n";
	}	
}

return 0;
}

