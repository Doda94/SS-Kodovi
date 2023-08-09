#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;

using namespace std;

const int N = 3e5 + 5;

int a[N], bit[N];

int n, q;

void update(int x, int v) {
  for (; x <= n; x += x & -x) {
    bit[x] += v;
  }
}

int query(int x) {
  int ans = 0;
  for (; x; x -= x & -x) {
    ans += bit[x];
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    update(a[i], 1);
  }
  for (int i = 1; i <= q; i++) {
    int x, y;
    cin >> x >> y;
    update(a[x], -1);
    int inv = query(a[x] - 1);
    update(a[y], 1);
    a[x] ^= a[y] ^= a[x] ^= a[y];
    if (inv == 0) {
      cout << "DA\n";
    } else {
      cout << "NE\n";
    }
  }
  return 0;
}