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
const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

vector <string> rj[1005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll m,n; cin >> m >> n;

for (int i = 0; i<m;i++){
    string s; cin >> s;
    for (int j = 0;j<n;j++){
        if (s[j]=='A'){
            rj[i*4].pb("....");
            rj[i*4+1].pb("....");
            rj[i*4+2].pb("....");
            rj[i*4+3].pb("....");
        }
        else if (s[j]=='B'){
            rj[i*4].pb("####");
            rj[i*4+1].pb("#..#");
            rj[i*4+2].pb("#..#");
            rj[i*4+3].pb("####");
        }
        else if (s[j]=='C'){
            rj[i*4].pb("....");
            rj[i*4+1].pb(".##.");
            rj[i*4+2].pb(".##.");
            rj[i*4+3].pb("....");
        }
        else if (s[j]=='D'){
            rj[i*4].pb("####");
            rj[i*4+1].pb("####");
            rj[i*4+2].pb("####");
            rj[i*4+3].pb("####");
        }
    }
}

for (int i = 0;i<4*m;i++){
    for (int j = 0;j<rj[i].size();j++)
        cout << rj[i][j];
    cout << endl;
}




return 0;
}