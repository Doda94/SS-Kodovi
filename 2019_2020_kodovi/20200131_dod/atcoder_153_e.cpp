#include <bits/stdc++.h>
using namespace std;
long long h, n, a, b, sol[20010], ans, inf=9583958392581539LL;
int main (){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
cin >> h >> n;
for (int i=1; i<=h+10005; i++) sol[i]=inf;
for (int i=0; i<n; i++){
	cin >> a >> b;
	for (int i=a; i<=h+10005; i++)
		sol[i]=min(sol[i], sol[i-a]+b);
} ans=inf;
for (int i=h; i<=h+10005; i++) ans = min(ans, sol[i]);
cout << ans;
return 0;
}

