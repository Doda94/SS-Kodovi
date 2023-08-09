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

ll a[105],a1[105],ksuma[105];
int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll n;
cin >> n;
repeat (n){
    cin >> a[i];
    
}

repeat(n){
    a1[i]=(i+1)*a[i]-ksuma[i-1];
    ksuma[i]=ksuma[i-1]+a1[i];
}
repeat (n)
    cout << a1[i] <<  " ";

return 0;
}