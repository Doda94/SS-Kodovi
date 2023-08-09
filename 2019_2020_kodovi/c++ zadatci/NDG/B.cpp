#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll a,b,g,s,k;
cin >> a >> b >> g >> s >> k;

s += k/b;
k = k%b;

g += s/a;
s = s%a;

cout << g+s+k;

return 0;
}

