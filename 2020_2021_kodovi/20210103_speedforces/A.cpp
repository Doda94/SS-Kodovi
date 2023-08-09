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

ll a,b; cin >> a >> b;
ll c = a/b;
double d = double(a)/double(b);

if (c%2==0)
    cout << "NO";
else
    cout << "YES";


return 0;
}