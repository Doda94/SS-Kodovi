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
const int inf = 0x3f3f3f3f;

ll n,a[1010],dp[1010][1010];

int solve (int polje, int z_s){
    if (polje<0 || polje>n)
        return inf;
    if (dp[polje][z_s] != 0)
        return dp[polje][z_s];
    if (polje == n-1)
        return a[polje];
    dp[polje][z_s] = min (solve(polje-z_s,z_s),solve(polje+z_s+1,z_s+1)) + a[polje];
    return dp[polje][z_s];
}


int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n; 
repeat (n) cin >> a[i];

cout << solve(1,1);


return 0;
}