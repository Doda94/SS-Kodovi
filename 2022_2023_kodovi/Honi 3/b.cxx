#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n,m; cin >> n >> m;
  ll sol = 0;

  for (int i = 0; i<m; i++){
    ll x; cin >> x;
    if (x==n+1)
      sol++;
  }

  cout << sol;

  return 0;
}