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

ll x;
cin >> x;
if (x>=15)
    cout << 1000000;
else if (x>=10)
    cout << 32000;
else if (x>=5)
    cout << 1000;
else
    cout << 0;




return 0;
}