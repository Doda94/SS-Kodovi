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
ll br;
char a[1005][1005];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
for (int i = 0;i<1005;i++)
    for (int j = 0;j<1005;j++)
        a[i][j]='.';

for (int i = 0;i<n;i++)
    for (int j = 0;j<n;j++){
        if (a[i+1][j]!='C' && a[i-1][j]!='C' && a[i][j+1]!='C' && a[i][j-1]!='C'){
            a[i][j]='C';
            br++;}
    }

cout << br << endl;

for (int i = 0;i<n;i++){
    for (int j = 0;j<n;j++)
        cout << a[i][j];
    cout << endl;
}



return 0;
}