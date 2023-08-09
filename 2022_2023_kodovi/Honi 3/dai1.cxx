#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n,q; cin >> n >> q;

  vector<ll> a(n);
  for (int i = 0; i<n; i++){
    cin >> a[i];
    a[i]--;
  }

  int inversions = 0;
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (a[i] > a[j]) {
        inversions++;
      }
    }
  }

  for (int i = 0; i<q; i++){
    ll x,y; cin >> x >> y;
    x--; y--;
    if (a[x] > a[y]) {
      inversions--;
    } else {
      inversions++;
    }
    swap(a[x], a[y]);

    if (inversions == 0) {
      cout << "DA\n";
    } else {
      cout << "NE\n";
    }
  }

  return 0;
}