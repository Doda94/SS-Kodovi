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

map <char,ll> val;
ll rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s,s1;
cin >> s >> s1;
for (int i = 0;i<s.size();i++)
    val[s[i]]=i;

for (int i = 1;i<s1.size();i++)
    if (val[s1[i]] <= val[s1[i-1]])
        rj++;

cout << rj+1;



return 0;
}