#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,x,brt=0; cin >> n >> x;
repeat (n){
    char a; ll b;
    cin >> a >> b;
    if (a=='+'){
        x+=b;
        continue;
    }
    else{
        if (b<=x)
            x-=b;
        else
            brt++;
    }
}

cout << x << " " << brt;


return 0;
}