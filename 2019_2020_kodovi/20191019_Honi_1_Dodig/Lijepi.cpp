 #include <iostream>
 #include <string>
 using namespace std;

int stringToInt( string s ){
   int q = 0;                              
   for ( int i = 0; i < s.size(); i++ ){
      int w = s[i] - '0';
      q = 10 * q + w;
   }
   return q;
}
 int main() {
	string x,y,a;
	int n,k;
	cin >> n;
	for (int i= 0; i<n; i++){
		cin >> x >> y;
		a = x+y;
		k += stringToInt (a);
	}
cout << k;
 return 0;
 }

