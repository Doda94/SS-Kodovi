#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

char a[1005][1005];
ll dp[1005][1005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
for (int i = 0; i<n; i++)
    for (int j = 0; j<n; j++)
        cin >> a[i][j];


for (int i =0;i<n;i++){
    if (a[0][i]!='*')
        dp[0][i]=1;
    else
        break;
}

for (int i =0;i<n;i++){
    if (a[i][0]!='*')
        dp[i][0]=1;
    else
        break;
}

for (int i = 1;i<n;i++)
    for (int j = 1;j<n;j++){
        if (a[i][j]!='*')
            dp[i][j]=dp[i-1][j]%1000000007+dp[i][j-1]%1000000007;
            dp[i][j]%=1000000007;
    }
    



cout << dp[n-1][n-1]%1000000007;




return 0;
}