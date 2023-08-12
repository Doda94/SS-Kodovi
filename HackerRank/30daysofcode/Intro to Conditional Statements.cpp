#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n;
cin >> n;
if (n%2==1)
    cout << "Weird";
else{
 if (n>=2 && n<=5)
    cout << "Not Weird";
 else if(n>=6 && n<=20)
    cout << "Weird";
 else if (n>20)
    cout << "Not Weird";
}





return 0;
}
