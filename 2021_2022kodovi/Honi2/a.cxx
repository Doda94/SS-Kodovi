#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,k; cin >> n >> k;

if (k<=n)
    cout << "PENNY";
else 
    cout << "SHELDON";



return 0;
}