#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <cstdio>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f;

int a[100100],rj[100100],c[100100];


int solve (int x,int n){
    int sol = 99999999;
    if (rj[x]!=inf)
        return rj[x];
    for (int i = 0;i<n;i++){
        if (a[i] >x)
            return sol;
        sol= min(1+solve(x-a[i],n),rj[x]);
        if (1+solve(x-a[i],n) < rj[x])
            c[sol]=a[i];
        rj[x]=sol;
    }
    return sol;       
}

int main () {
ios::sync_with_stdio(0);    
cin.tie(0); cout.tie(0);
memset(rj,inf,sizeof (rj));
ll n,s; cin >> n >> s;
repeat (n)  cin >> a[i];
rj[0] = 0;
int d = solve (s,n);
cout << d;

while (d>0){
    cout << c[d] << " ";
    d-=c[d];
}


return 0;
}