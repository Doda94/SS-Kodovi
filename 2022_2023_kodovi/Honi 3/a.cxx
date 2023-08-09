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

  ll c; cin >> c;
  cout << c%10 << "\n" << c/10%10*10 << "\n" << c/100*100;

  return 0;
}