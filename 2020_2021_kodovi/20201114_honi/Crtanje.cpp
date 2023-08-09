#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
    ll qw = 1;
    for (ll i = 0; i<w; i++)
        qw*= q;
    return qw;
}

ll n,x=100,y;
char rj[105][105];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

for (int i = 0;i<105;i++)
    for (int j = 0;j<105;j++)
        rj[i][j] = '.';

cin >> n;

char c;
cin >> c;
if (c=='+')
    rj[100][0] = '/';
else
    rj[100][0] = '_';
if (c == '+'){
    x--;
    y++;
}
else if (c == '='){
    y++;
}

for (int i = 1; i<n; i++){
    cin >> c;
    if (c == '+')
        rj[x][y] = '/';
    else
        rj[x][y] = '_';
    
    // rj[x][y] = c;
    if (c == '+'){
        x--;
        y++;
    }
    else if (c == '='){
        y++;
    }   
}

for (int i = x+1;i<101;i++){
    for (int j = 0;j<y;j++)
        cout << rj[i][j];
cout << endl;
}




return 0;
}