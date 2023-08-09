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

ll brp,brn,rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
repeat (n){
    ll a; cin >> a;
    if (a%2==0)
        brp++;
    else
        brn++;
}

ll parni = brp;
ll nep = min(brp,brn); 
brn-=nep;


parni+=brn/3;
nep+=brn/3;
brn/=3;
rj = parni+nep;
if (rj%2==0)
    if (brn==2)
        rj++;
if (rj%2==1)
    rj++;
    
cout << rj;#include <iostream>
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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);




testing if they recognise this

return 0;
}


return 0;
}