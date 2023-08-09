#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll a,b,c,d; cin >> a >> b >> c >> d;
if (b>d && a<=c)
    cout << "NEPOBJEDIVA";
else
    cout << "UMORNA";




return 0;
}