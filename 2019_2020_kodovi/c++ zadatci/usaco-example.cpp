#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
#include<set>

using namespace std;

int n, tmax;
int a[10005];
multiset<int> s;

int main()
{
  freopen( "cowdance.in", "r", stdin );
  freopen( "cowdance.out", "w", stdout );

  cin >> n >> tmax;
  for (int i = 1; i <= n; ++i)
    cin >> a[i];

  int lo = 1, hi = n, mid;
  while (lo <= hi)
  {
  	s.clear();
  	mid = (lo + hi) / 2;
//  	cout << "mid: " << mid << endl;
  	for(int i = 1; i <= mid; ++i)
  	  s.insert(a[i]);
//  	for(std::set<int>::iterator it = s.begin(); it != s.end(); ++it)
//  	  cout << *it << " ";
//  	cout << endl;
  	
    int j = mid + 1;
    while (j <= n)
    {
      if (a[j] + *s.begin() > tmax) break; 
      s.insert(a[j] + *s.begin());
//      cout << "m: " << *s.begin() << endl;
      s.erase(s.begin());
      j++;
	}
	if (j <= n)
	{
	  lo = mid + 1;
	}
	else
	  hi = mid - 1;  
	
  }
  
  cout << lo;
  	  
  return 0;
}

/*
9 14
2
3
4
1
7
6
3
5
2
*/


