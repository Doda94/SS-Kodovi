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

ll a[200200];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,k; cin >> n >> k;
ll poz=0,neg=0,best=0,suma;
for (int i = 0; i<n;i++)
    cin >> a[i];

for (int i = 0; i<n;i++){
    if (i<k)
        if (i%2==0)
            poz+=a[i];
        else    
            neg+=a[i];
    else{
        if (i%2==0){
            suma=neg-poz;
            neg-=a[i-k];
            poz+=a[i];
        }
        else {
            suma=poz-neg;
            poz-=a[i-k];
            neg+=a[i];
        }
        cout << suma << endl;
    }
}
cout << poz-neg << endl;




return 0;
}