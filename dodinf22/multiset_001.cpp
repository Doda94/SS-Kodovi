#include <bits/stdc++.h>

using namespace std;

multiset<int> ms = {5, 7, 5, 2, 15, 7, 5, 3, 5, 7, 7, 18, 7, 10};
set<int>::iterator it;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int x = 6;
//  cin >> x;
  cout << *ms.begin() << "\n";
  cout << *ms.rbegin() << "\n";
  cout << *ms.lower_bound(x) << "\n";
  cout << *ms.lower_bound(100) << "\n";
  cout << *--ms.lower_bound(100) << "\n";
  cout << *(--ms.lower_bound(x)) << "\n";
  cout << *ms.upper_bound(x) << "\n";
  
  for (auto x : ms) {
		cout << x << " ";
	}
	cout << "\n";
	for (it = ms.begin(); it != ms.end(); ++it)
		cout << *it << " ";
		
	ms.erase(5);
	cout << "\n";
	for (auto x : ms) {
		cout << x << " ";
	}	
	cout << "\n";
	cout << *(++ms.find(7));
	cout << "\n";
	cout << *(--ms.find(7)); // find pokazuje na prvi element s vrijednošću 7
  



  return 0;
}

