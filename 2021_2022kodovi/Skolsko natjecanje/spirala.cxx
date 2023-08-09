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
typedef long long ll;
using namespace std;
const ll INFll = 4557430888798830399;
const int INFint = 0x3f3f3f3f;

ll a[10006][10006];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll r,s; cin >> r >> s;
ll x,y; cin >> x >> y;

ll k = 1;

for (int i = 0;i<s;i++){
    a[0][i]=k;
    k++;
}
for (int i = 1;i<r;i++){
    a[i][s-1]=k;
    k++;
}
for (int i = s-2;i>=0;i--){
    a[r-1][i]=k;
    k++;
}
for (int i = r-2;i>0;i--){
    a[i][0]=k;
    k++;
}

ll i=1,j=1;
while (k<=r*s){
    while (a[i][j]==0){
        a[i][j]=k;
        k++;
        j++;
    }
    j--;
    i++;
    while (a[i][j]==0){
        a[i][j]=k;
        k++;
        i++;
    }
    i--;
    j--;
    while (a[i][j]==0){
        a[i][j]=k;
        k++;
        j--;
    }
    j++;
    i--;
    while(a[i][j]==0){
        a[i][j]=k;
        k++;
        i--;
    }
    i++;
    j++;
}


// for (int i = 0;i<r;i++){
//     for (int j = 0;j<s;j++)
//         cout << a[i][j] << " ";
//     cout << endl;
// }

ll sol = 0;
for (int i = 0; i<s;i++)
    sol+=a[x-1][i];
for (int i = 0; i<r;i++)
    sol+=a[i][y-1];
sol-=a[x-1][y-1];
cout << sol;

return 0;
}