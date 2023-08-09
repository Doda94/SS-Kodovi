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

bool done = 1;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll m=4,l=2;

ll n;
cin >> n;
repeat (n){
    char a,b;
    cin >> a >> b;
    if (a=='t')
        m++;
    if (b=='t')
        l++;
    if(m==l)
        done=0;
}

if (done)
    cout << "pobjegao";
else
    cout << "ulovljen";




return 0;
}