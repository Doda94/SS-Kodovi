#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

ll n,k,m;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> n >> k >> m;

if (n==0)
    cout << k+m;
else if (k==0)
    cout << n-m;
else
    cout << n-k;



return 0;
}