#include <bits/stdc++.h>

using namespace std;

set<int> S = {5, 7, 8, 2, 15, 12, 3, 18, 10};
set<int>::iterator it;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int x = 10;
//  cin >> x;
  cout << *S.begin() << "\n";
  cout << *S.rbegin() << "\n";
  cout << *S.lower_bound(x) << "\n";
  cout << *(--S.lower_bound(x)) << "\n";
  cout << *S.upper_bound(x) << "\n";
  
  for (auto x : S) {
		cout << x << " ";
	}
	cout << "\n";
	for (it = S.begin(); it != S.end(); ++it)
		cout << *it << " ";
  



  return 0;
}

