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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll a,b,c,d,rj=0;
cin >> a >> b >> c >> d;
if (a<=6)
    rj+=a;
else
    rj+=12-a;

if (b<=6)
    rj+=b;
else
    rj+=12-b;

if (c<=6)
    rj+=c;
else
    rj+=12-c;

if (d<=6)
    rj+=d;
else
    rj+=12-d;



cout << rj;

return 0;
}