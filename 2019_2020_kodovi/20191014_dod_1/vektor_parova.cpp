
#include <cstdio>
#include <iostream>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main ()
{
    int prvi, drugi;
    
	vector< pair<int, int> > v;
    for(int i=0;i < 3;i++)
    {
      cin >> prvi >> drugi;
      v.push_back(make_pair(prvi, drugi));
    }
    
    for(int i=0;i < 3;i++)
    cout << v[i].first << ' ' << v[i].second << endl;


printf("\n\n");
return 0;
}

