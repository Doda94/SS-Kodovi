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


ll player[10];
repeat (10){
    player[i]=-696969;
}
ll ta=0,tb=0;
ll n; cin >> n;
for (int i = 0; i<n;i++){
    ll t,a,b; cin >> t >> a >> b;
    if (a>=1 && a<=4){
        if (t-player[a] <= 10)
            ta+=150;
        else
            ta+=100;
        player[a]=t;
    }
    
    if (a>=5 && a<=8){
        if (t-player[a] <= 10)
            tb+=150;
        else
            tb+=100;
        player[a]=t;
    }
}

cout << ta << " " << tb;



return 0;
}