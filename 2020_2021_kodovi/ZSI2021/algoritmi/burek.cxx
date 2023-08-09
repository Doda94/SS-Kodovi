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

ll pot (ll q, ll w){
	ll qw = 1;
	for (ll i = 0; i<w; i++)
		qw*= q;
	return qw;
}

vector <pair <ll, pair<ll,ll> > > t,t1;
ll in [100100];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat (n){
    ll x1,x2,x3,y1,y2,y3;
    cin >> x1>> y1>>x2>>y2>>x3>>y3;
    ll x,X,y,Y;
    (x1<x2)?(x=x1):(x=x2);
    (x<x3)?(x=x):(x=x3);
    (x1>x2)?(X=x1):(X=x2);
    (X>x3)?(X=X):(X=x3);
    (y1<y2)?(y=y1):(y=y2);
    (y<y3)?(y=y):(y=y3);
    (y1>y2)?(Y=y1):(Y=y2);
    (Y>y3)?(Y=Y):(Y=y3);
    // cout << y << " " << Y << endl;
    t.pb(make_pair(x,make_pair(2,i)));
    t.pb(make_pair(X,make_pair(0,i)));
    t1.pb(make_pair(y,make_pair(2,i)));
    t1.pb(make_pair(Y,make_pair(0,i)));
}

ll n1;cin >> n1;
ll brojac = 0;
repeat (n1+1){
    string s;
    getline (cin,s);
    // cout << s << " .\n";
    string broj;
    ll br=0;
    for (int j =4;j<s.size();j++)
        broj+=s[j];
    ll potn=1;
    for (int j = broj.size()-1;j>=0;j--){
        br+=(int(broj[j])-int('0'))*potn;
        potn*=10;
    }
    // cout << br << endl;
    if (s[0]=='x' ){
        t.pb(make_pair(br,make_pair(1,brojac)));
        brojac++;
    }
    if (s[0]=='y' ){
        t1.pb(make_pair(br,make_pair(1,brojac)));
        brojac++;
    }
}

sort (t.begin(),t.end());
sort (t1.begin(),t1.end());

ll cur=0;
for (int i = 0;i<t.size();i++){
    if (t[i].second.first == 1)
        in[t[i].second.second]=cur;
    else if (t[i].second.first == 0)
        cur--;
    else if (t[i].second.first == 2)
        cur++;
}
cur = 0;
for (int i = 0;i<t1.size();i++){
    if (t1[i].second.first == 1)
        in[t1[i].second.second]=cur;
    else if (t1[i].second.first == 0)
        cur--;
    else if (t1[i].second.first == 2)
        cur++;
}

repeat (n1){
    cout << in[i] << endl;
}

return 0;
}