
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long a,rj,n,c[15];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);


cin >> n;

for (int i = 1; i<=n;i++){
    cin >> a;
    long long b = a;
    while (b>0){
        b= b/10;
        c[i]++;
    }
    if (c[i-1] != 0){
        rj = rj*pow(10,c)+a;
    }
    if (c==0)
        rj= a;
}

cout << rj;




return 0;
}
