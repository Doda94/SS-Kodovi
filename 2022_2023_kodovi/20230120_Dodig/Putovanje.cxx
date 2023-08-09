#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

ll a[20][20];
ll best[20][20];

void checkBest(ll x, ll s){
  for (int i = 0; i<s; i++){
    if (best[x][0]+a[x][i] < best[0][i]){
        best[0][i] = best[x][0]+a[x][i];
        checkBest(i, s);
    }
  }
}


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n; cin >> n;

  memset(best, INFll, sizeof best);

  for (int i = 0; i<n; i++)
    for (int j = 0; j<n; j++)
        cin >> a[i][j];

  best[0][0] = 0;

  for (int i = 0; i<n; i++){
    checkBest(i, n);
  }

  cout << best[0][n-1];

  return 0;
}