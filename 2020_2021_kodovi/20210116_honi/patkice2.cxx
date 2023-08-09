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
typedef long long ll;
using namespace std;

queue <ll> X,Y;
queue <pair<ll,ll> > qu;

ll inf =4557430888798830399;
char a[2020][2020];
ll best[2020][2020]; 

void neki_algoritam(ll r,ll s){
    ll x = X.front();
    ll y = Y.front();
    pair <ll,ll> lp = make_pair(qu.front().first,qu.front().second); // last pos
    ll br =0;
    X.pop(); Y.pop();
    char c = a[lp.first][lp.second];
    if (c == '^')
        if (x+1!=lp.first)
            br++;
    if (c == 'v')
        if (x-1!=lp.first)
            br++;
    if (c == '>')
        if (y+1!=lp.second)
            br++;
    if (c == '<')
        if (y-1!=lp.second)
            br++;

    if (best[x][y] > br+best[lp.first][lp.second])
        best[x][y] = br+best[lp.first][lp.second];

    if (x-1>=0 ){
                X.push(x-1);
                Y.push(y);
                best[x-1][y]=0;
                qu.push(make_pair(x,y));
            }
            if (x+1<r){
                X.push(x+1);
                Y.push(y);
                best[x+1][y]=0;
                qu.push(make_pair(x,y));
            }
            if (y-1>=0 ){
                X.push(x);
                Y.push(y-1);
                best[x][y-1]=0;
                qu.push(make_pair(x,y));
            }
            if (y+1<s){
                X.push(x);
                Y.push(y+1);
                best[x][y+1]=0;
                qu.push(make_pair(x,y));
            }

}




int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
memset (best,inf, sizeof (best));
ll q,w,xx,xy;
ll r,s; cin >> r >> s;
for (int i=0;i<r;i++)
    for (int j =0;j<s;j++){
        cin >> a[i][j];
        if (a[i][j]=='o'){
            q=i;
            w=j;
            if (q-1>=0){
                X.push(q-1);
                Y.push(w);
                best[q-1][w]=0;
                qu.push(make_pair(q,w));
            }
            if (q+1<r){
                X.push(q+1);
                Y.push(w);
                best[q+1][w]=0;
                qu.push(make_pair(q,w));
            }
            if (w-1>=0){
                X.push(q);
                Y.push(w-1);
                best[q][w-1]=0;
                qu.push(make_pair(q,w));
            }
            if (w+1<s){
                X.push(q);
                Y.push(w+1);\
                best[q][w+1]=0;
                qu.push(make_pair(q,w));
            }
        }
        if (a[i][j]=='x'){
            xx=i;
            xy=j;
        }
    }

neki_algoritam(r,s);

cout << best[xx][xy];

return 0;
}