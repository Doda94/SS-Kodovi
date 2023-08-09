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
typedef long long ll;
using namespace std;
const ll INFll = 0x7f;
const int INFint = 0x3f3f3f3f;

ll f[10];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s; cin >> s;
ll br = 0;
for (int i = 0;i<s.size();i++){
    if (f[int(s[i])-int('0')]==0){
        f[int(s[i])-int('0')]=1;
        br++;    
    }
}
cout << br;



return 0;
}