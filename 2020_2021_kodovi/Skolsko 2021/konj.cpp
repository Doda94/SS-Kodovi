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

ll r,s,a[20][20],f[20][20],rj;
queue <pair <int , int> > qu;

void solve (){
    int x = qu.front().first;
    int y = qu.front().second;
    qu.pop();
    int x1,y1;
    x1 = x-2;
    y1 = y-1;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1 && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }

    x1 = x-2;
    y1 = y+1;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));    
        f[x1][y1]=1;
        rj++;
    }

    x1 = x+2;
    y1 = y+1;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }
    
    x1 = x+2;
    y1 = y-1;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }

    x1 = x-1;
    y1 = y-2;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }

    x1 = x+1;
    y1 = y-2;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }

    x1 = x+1;
    y1 = y+2;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }
    
    x1 = x-1;
    y1 = y+2;
    if (x1>=0 && x1<r && y1 >= 0 && y1 < s && a[x1][y1]==1  && f[x1][y1] != 1){
        qu.push(make_pair(x1,y1));
        f[x1][y1]=1;
        rj++;
    }

    // while (!qu.empty())
    //     solve();

}

ll sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> r >> s;

for (int i =0;i<r;i++)
    for (int j = 0;j<s;j++)
        cin >> a[i][j];

for (int i =0;i<r;i++)
    for (int j = 0;j<s;j++){
        if (a[i][j]==1){
            ll f[20][20];
            rj = 0;
            // memset(f,0,sizeof(f));
            qu.push(make_pair(i,j));
            while (!qu.empty())
                solve();
            if (rj>sol) 
                sol=rj;
            
        }
    }

cout << sol;

return 0;
}