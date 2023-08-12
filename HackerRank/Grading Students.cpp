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

ll n;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n;
fr(n)
{
    ll grade;
    cin >> grade;
    ll a = grade;
    ll br = 0;
    while (a%5!=0){
        a++;
        br++;
    }
    if (br<3 && grade>=38)
        grade=a;
    cout << grade << "\n";

}




return 0;
}
