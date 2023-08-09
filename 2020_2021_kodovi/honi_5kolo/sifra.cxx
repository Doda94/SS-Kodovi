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

ll br;
set <ll> se;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s;
cin >> s;
bool done =0;
ll br= 0;

repeat(s.size()){
    if (done==0 && int(s[i])>= int('0') && int (s[i]) <= int('9')){
        done=1;
        br+=int(s[i])-int('0');
    }
    else if (done && int(s[i])>= int('0') && int (s[i]) <= int('9')){
        br*=10;
        br+=int(s[i])-int('0');
    }
    else if (done && int(s[i])>=int('a') && int(s[i]) <= int('z')){
        se.insert(br);
        br=0;
        done = 0;
    }

}

ll sol = 0;
if (done)
    sol++;

for (auto it : se)
    if (it!=0)
        sol++;

cout << sol;

return 0;
}