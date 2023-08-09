#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n;
cin >> n;
ll a= n/3;
ll b=n/3;
if (n%3==2)
    b++;
ll c=n/3;
if (n%3>=1)
    c++;

cout << a << " " << b <<" " << c;




return 0;
}