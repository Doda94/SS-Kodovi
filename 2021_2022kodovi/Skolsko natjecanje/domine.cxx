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

char a[20][20];
ll rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll r,s; cin >> r >> s;

for (int i = 0; i<r; i++){
    for (int j = 0; j<s; j++){
        cin >> a[i][j];
    }
}

for (int i = 0; i<r-1; i++){
    bool stanje = true;
    for (int j = 0; j<s; j+=2){
        if (j+1<s && a[i][j] != a[i][j+1])
            if (a[i+1][j] != a[i+1][j+1])
                continue;
            else
                if (a[i][j] != a[i+1][j] && a[i][j+1]!=a[i+1][j+1])
                            continue;
                else
                    stanje = false;
        else
            if (a[i][j] != a[i+1][j])
                if (j+1<s)
                    if (a[i][j+1]!=a[i+1][j+1])
                        continue;
                    else 
                        stanje=false;    
                else
                    continue;
            else 
                stanje=false;
    }
    if (stanje)
        rj++;
}

cout << rj;

return 0;
}