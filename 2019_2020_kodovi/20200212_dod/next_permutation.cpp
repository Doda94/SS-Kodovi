#include <bits/stdc++.h>

using namespace std;
vector<int> v;
int a[] = {4, 3, 7, 2};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
//  sort(a, a + 4);
  do{
  	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
	}while (next_permutation(a, a + 4));
  


  return 0;
}

