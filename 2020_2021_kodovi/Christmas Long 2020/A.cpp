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

ll a,b; cin >> a >> b;

ll ivan = (a/2)*2;
ll filip = ivan;
ll brs= b;

if (a%2==1){
    ivan+=2;
    brs-=2;    
}

if (brs%2==0 && brs>=0)
    cout << "POSTENO";
else cout <<"HUHUHU";







return 0;
}