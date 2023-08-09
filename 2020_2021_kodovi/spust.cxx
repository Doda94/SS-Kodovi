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

queue <pair< ll , ll> > qu,qu1;
// bool done = 0;
ll a[1010][1010],dp[1010][1010];
ll n,m,k,sol;

void solve (int t){
    ll i =qu.front().first;
    ll j = qu.front().second;
    qu.pop();
    if (dp[i][j] > sol)
        sol=dp[i][j];
    
    if (a[i+1][j]-t > 0 && i<n && a[i][j]>a[i+1][j]){
        if (dp[i][j]+1 > dp[i+1][j]){
            dp[i+1][j]=dp[i][j]+1;
            qu.push(make_pair(i+1,j));
        }
    }
    if (a[i-1][j]-t > 0 && i>=0 && a[i][j]>a[i-1][j]){
        if (dp[i][j]+1 > dp[i-1][j]){
            dp[i-1][j]=dp[i][j]+1;
            qu.push(make_pair(i-1,j));
        }
    }
    if (a[i][j+1]-t > 0 && j<m && a[i][j]>a[i][j+1]){
        if (dp[i][j]+1 > dp[i][j+1]){
            dp[i][j+1]=dp[i][j]+1;
            qu.push(make_pair(i,j+1));
        }
    }
    if (a[i][j-1]-t > 0 && j>=0 && a[i][j]>a[i][j-1]){
        if (dp[i][j]+1 > dp[i][j-1]){
            dp[i][j-1]=dp[i][j]+1;
            qu.push(make_pair(i,j-1));
        }
    }

}

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll maks=0;

cin >> n >> m >> k;
for (int i = 0; i<n;i++)
    for (int j = 0; j<m;j++){
        cin >> a[i][j];
        if (a[i][j]>maks)
            maks=a[i][j];
        qu1.push(make_pair(i,j));    
    }



for (int t = 0;t<k;t++){
    sol = 0;
    memset (dp,0,sizeof(dp));
    qu=qu1;
    while (!qu.empty()) 
        solve(t);
    if (t<maks)
        cout << sol+1 << "\n";
    else 
        cout << 0 << "\n";
    // for (int i = 0; i<n;i++)
    //     for (int j = 0; j<m;j++)
    //         qu.push(make_pair(i,j));    
}




return 0;
}

