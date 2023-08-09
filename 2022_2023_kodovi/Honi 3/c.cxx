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

  for (int i=0; i<m; i++){
    ll a; cin >> a;
    sol += a/4;
    if (a<4){
        cout << "NE";
        return 0;
    }
  }
  if (sol >= n && n>=m)
    cout << "DA";
  else
    cout << "NE";

  return 0;
}