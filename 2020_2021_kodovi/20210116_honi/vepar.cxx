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

vector <unsigned int> br;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
br.pb(1);
for (int i = 1;i<10000001;i++)
    br.pb(i*br[i-1]);


cout << br[10];
ll t; cin >> t;
for (int q = 0;q<t;q++){
    ll a,b,c,d,u1=1,u2=1;
    cin >> a >> b >> c >> d;
    

//     if (u2%u1==0)
//         cout << "DA\n";
//     else 
//         cout << "NE\n";
}
 


return 0;
}