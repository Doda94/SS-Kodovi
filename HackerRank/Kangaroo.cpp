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

ll x1,v1,x2,v2;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> x1 >> v1 >> x2 >> v2;

if (v1 <= v2){
    cout << "NO";
    return 0;
    }
else
    if ((x2-x1)%(v1-v2)==0)
        cout << "YES";
    else 
        cout << "NO";





return 0;
}