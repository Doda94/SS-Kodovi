#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#include <fstream>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

ll z[75];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);



fr (1,10000000,1){
    int br = i,zbr=0,Fail=0;
    int f[10];
    memset (f,0,sizeof(f));
    while (br>0){
        zbr+=br%10;
        if (f[br%10]==1)
            Fail=1;
        else f[br%10]=1;
        br/=10;
    }
    if (z[zbr]==0 && Fail==0)
        z[zbr]=i;
}

for (int j = 1;j<=72;j++)
    cout << j << " " << z[j] << endl;




return 0;
}