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

ll arr[100005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
memset (arr,-1,sizeof(arr));


ll n,q;
cin >> n >> q;

repeat (q){
    ll a,b,c; cin >> a >> b >> c;
    for (int j = a;j<=b;j++)
        arr[j]=c;
}

fr(1,n+1,1)
    cout << arr[i] << " ";

return 0;
}