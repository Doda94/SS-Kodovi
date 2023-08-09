#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

ll rv [25][25];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n; cin >> n;

  for (int i = 0; i<n; i++){
    ll a, b; cin >> a >> b;
    rv [a][b]++;
    ll maks = 0;
    ll l,r;
    for (int j = 0; j<25; j++)
      for (int k = 0; k<25; k++)
        if (rv [j][k] > maks) {
            maks = rv [j][k];
            l = j;
            r = k;
        }
    cout << l << " " << r << endl;
  }
  
  return 0;
}