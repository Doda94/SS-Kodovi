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

string s; cin >> s;
ll n = s.size();
bool rj = 1;
if (n == 1 && (s=="0" || s=="8")){
    cout << "DA";
    return 0;
}
else if (s[n-1] == '0')
    rj=0;
ll nista = 0;
repeat (n)
    if (s[i]=='0' || s[i]=='8')
        nista++;
    else 
        rj=0;

if (rj)
    cout << "DA";
else
    cout << "NE";




return 0;
}