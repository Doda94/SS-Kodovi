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


int zbr;
vector <int> rj;
pair <int, int> a[8];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

repeat (8){
    int l;cin >> l;
    a[i]=make_pair(l,i);
}
sort(a,a+8);
// cout << zbr << endl;

for (int i =7;i>2;i--){
    zbr+=a[i].first ;
    rj.pb(a[i].second);
    // cout << a[i].first << " " << a[i].second << endl;
}
cout << zbr << endl;
sort (rj.begin(),rj.end());
repeat (5)
    cout << rj[i]+1 << " ";
return 0;
}