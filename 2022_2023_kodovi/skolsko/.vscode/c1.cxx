#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

ll a[20][20];
ll best[20][20];

void checkBest(ll x, ll s){
    for (int i = 1; i<s; i++)
        if (best[x][0]+a[x][i] < best[i][0] && i!=s-1){
            best[i][0]=best[x][0]+a[x][i];
        }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  memset(best, INFll, sizeof best);

  ll n; cin >> n;
  for (int i = 0; i<n; i++){
    for (int j = 0; j<n; j++){
        cin >> a[i][j];
    }
  }
  
  best[0][0]=0;

  for (int i = 1; i<n; i++){
    checkBest(i, n);
  }

  cout << best[n-1][0];

  return 0;
}