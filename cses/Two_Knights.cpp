#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

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
int i =1;
for(int i = 1;i<=n;i++){
    cout << (pot(i,2)*((pot(i,2))-1))/2-(4*(i-1)*(i-2)) << "\n";
}





return 0;
}