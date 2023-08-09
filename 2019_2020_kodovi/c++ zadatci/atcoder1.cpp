#include <iostream>
#include <string>
using namespace std;

int main() {

int s,k;
string a,b,c;
cin >> s >> a;
k = s/2;
b = a.substr(1,k);
c = a.substr(k,s);

cout << c;


return 0;
}

