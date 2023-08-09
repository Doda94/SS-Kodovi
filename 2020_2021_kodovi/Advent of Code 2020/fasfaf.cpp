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

ll lista[50],najmanji=9999999999,najveci=0,zbr=0;

repeat(17){
    ll a;
    cin>> a;
    if (a<najmanji)
        najmanji=a;
    if(a>najveci)
        najveci=a;
    zbr+=a;
}

cout << najveci+najmanji;


return 0;
}