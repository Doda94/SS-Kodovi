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

ll n,x=100,y,sx=100000000,bx,by;
char rj[210][210];


int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

for (int i = 0;i<210;i++)
    for (int j = 0;j<210;j++)
        rj[i][j] = '.';

cin >> n;
char c;
cin >> c;
if (c=='+')
    rj[x][y]= '/';
else if (c=='-')
    rj[x][y] =  '\\';
else
    rj[x][y] = '_';

if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;

for (int i = 1;i<n;i++){
    cin >> c;
    if (rj[x][y] == '/' && c == '+'){
        x--;
        y++;
        rj[x][y] = '/';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    if (rj[x][y] == '/' && c == '='){
        y++;
        x--;
        rj[x][y] = '_';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '/' && c == '-'){
        y++;
        rj[x][y] = '\\';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '\\' && c == '-'){
        x++;
        y++;
        rj[x][y] = '\\';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '\\' && c == '+'){
        y++;
        rj[x][y] = '/';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '\\' && c == '='){
        y++;
        rj[x][y] = '_';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '_' && c == '-'){
        y++;
        x++;
        rj[x][y] = '\\';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else if (rj[x][y] == '_' && c == '+'){
        y++;
        rj[x][y] = '/';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
        continue;
    }
    else{
        y++;
        rj[x][y] = '_';
        if (x>bx)
    bx=x;
if (x<sx)
    sx=x;
if (y>by)
    by=y;
    }
}


for (int i = sx;i<=bx;i++){
    for (int j = 0;j<=by;j++)
        cout << rj[i][j];
cout << endl;
}






return 0;
}
