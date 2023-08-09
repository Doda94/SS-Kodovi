#include <iostream>
#include <cmath>
#include <utility>
 
using namespace std;
 
typedef pair<int,int> pii;
typedef long long ll;
#define mp make_pair
#define x first
#define y second
 
const ll inf=1e15;
 
pair<ll,ll> eks1[200003],eks2[200003];
ll arr[200003],sol[200003];
 
int main () {
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll mx=0ll;
	ll mn=inf;
	for(ll i=0ll;i<n;i++){
		if(arr[i]>mx){
			mx=arr[i];
		}
		if(arr[i]<mn){
			mn=arr[i];
		}
		eks1[i].x=mn;
		eks1[i].y=mx;
	}
	mx=0ll;
	mn=inf;
	for(ll i=n-1;i>=0;i--){
		if(arr[i]>mx){
			mx=arr[i];
		}
		if(arr[i]<mn){
			mn=arr[i];
		}
		eks2[i].x=mn;
		eks2[i].y=mx;
	}
	ll ret=0ll;
	mn=3*1e18;
	for(ll i=0ll;i<n-1;i++){
		sol[i]=(i+1ll)*(i+1ll)+eks1[i].x*eks1[i].x+eks1[i].y+(n-i-1ll)*(n-i-1ll)+eks2[i+1].x*eks2[i+1].x+eks2[i+1].y;
		if(sol[i]<mn){
			mn=sol[i];
			ret=i+1;
		}
	}
	cout<<ret;

return 0;
}
