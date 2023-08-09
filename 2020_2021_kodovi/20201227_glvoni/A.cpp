#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

vector < pair <ll, ll> > vpoz,vneg;
ll zbrpoz,zbrneg;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat(n){
    ll a; cin >> a;
    if (a>0){
        vpoz.pb(make_pair(a,i));
        zbrpoz+=a;
        }
    else{
        vneg.pb(make_pair(a,i));
        zbrneg+=abs(a);
        }
}

if (zbrpoz > zbrneg){
    repeat(vpoz.size()){
        cout << vpoz[i].second+1 << " ";
    }
    repeat(vneg.size()){
        cout << vneg[i].second+1 << " ";
    }
}
else 
    cout << -1;



return 0;
}