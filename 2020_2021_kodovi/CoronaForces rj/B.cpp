#include <iostream>
#include <cmath>
#include <utility>
 
using namespace std;
 
typedef pair<int,int> pii;
typedef long long ll;
#define mp make_pair
#define x first
#define y second
 
ll dp[100003];
pii arr[100003];
 
int main () {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lld %lld",&arr[i].x,&arr[i].y);
		dp[i]=max(0ll,arr[i-1].x-arr[i].x+dp[i-1])+arr[i].y;
	}
	ll mx=0ll;
	for(int i=1;i<=n;i++){
		mx=max(mx,dp[i]-arr[i].y);
	}
	cout<<mx;
 
 
 
return 0;
}
