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
typedef long long ll;
using namespace std;
const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

int a[1000006],b[1000006],t[1000006],dp[1000006],dpk[1000006];
vector <pair <int, int> > di[1000006];
queue <int> qu;
int memo[100][1000006];
int k;
void solve (int dgra){
    while (!qu.empty()){
        int x=qu.front(); // otkud krecemo
        qu.pop();
        for (int i = 0;i<di[x].size();i++){
            int x1= di[x][i].first;
            int y1= di[x][i].second;
            if (y1+dp[x] < dp[x1] && dpk[x]+1<=k){
                dp[x1]= y1+dp[x];
                memo[dgra][x1]=dp[x1];
                dpk[x1]=dpk[x]+1;
                qu.push(x1);
            }
        }
    }
}

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int n,m; cin >> n >> m;
memset (dp,INFint,sizeof dp);
memset (memo,INFint,sizeof memo);

for (int i = 0; i<m;i++){
    cin >> a[i] >> b[i] >> t[i];
    di[a[i]].pb(make_pair(b[i],t[i]));
}

int q; cin >> k >> q;
for (int i = 0; i<q;i++){
    int c,d; cin >> c >> d;
    memset (dp,INFint,sizeof dp);
    dp[c]=0;
    dpk[c]=0;
    if (memo[c][d]==INFint){
        qu.push(c); 
        solve(c);
        if (dp[d]!=INFint)
            cout << dp[d] << "\n";
        else    
            cout << -1 <<"\n";
    }
    else
        cout << memo[c][d] << "\n";
}




return 0;
}