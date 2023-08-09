#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

ll a[300300],pos[300300];

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n,q; cin >> n >> q;

  for (int i = 0; i<n; i++){
    cin >> a[i];
    pos[a[i]]=i;
  }

  for (int i = 0; i<q; i++){
    ll x,y; cin >> x >> y;
    swap(a[pos[x]],a[pos[y]]);
    swap(pos[x],pos[y]);

    ll br = 0;

    for (int j = pos[1]; j<n-1; j++)
        if (a[j]+1 != a[j+1])
            br++;

    for (int j = 0; j<pos[1]-1; j++)
        if (a[j] > a[j+1]){
            br++;
            break;
        }

    (br>0)? cout << "NE\n" : cout << "DA\n";

  }

  return 0;
}