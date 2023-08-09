#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <iomanip> 
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

long double x[100005],y[100005];
pair <long double, ll> z[100005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
ll sum = 0;
for (int i = 0; i<n; i++){
    cin >> x[i];
    sum+=x[i];
}

for (int i = 0; i<n; i++){
    cin >> y[i];
    z[i]=make_pair(y[i]/x[i],i);
}

sort (z, z+n);

if (z[0].first*sum > z[1].first*(sum-x[z[0].second]))
    cout << setprecision(9) << fixed << (z[0].first*sum)/1000;
else
    cout << setprecision(9) << fixed << z[1].first*(sum-x[z[0].second])/1000;

// for (int i = 0; i<n; i++){
//     cout << z[i].first*sum << ":" << z[i].second << endl;
// }


return 0;
}