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

set <string> s;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat (n){
    string a,b;
    cin >> a >> b;
    s.insert(a);
}

cout << s.size();


return 0;
}