#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int brp = 26;
char s[30];
int n;
 
void check (int lo, int hi,char col, int dub){
	if (lo < 1 || hi > n){
		return;
    }
	if (lo == 1 && hi == n){
		if (dub < brp){
			brp = dub;
		}
		return;
			}
	if (col == s[lo-1]){
		check (lo-1,hi,s[lo-1],dub);
	}
	else {
		check (lo-1,hi,s[lo-1],dub+1);
	}
	if (col == s[hi+1]) {
		check (lo,hi+1,s[hi+1],dub);
	}
	else {
		check (lo,hi+1,s[hi+1],dub+1);
	}
	 
	return;
}
 
 
 
int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
//int n;
cin >> n;
 
for (int i=1; i<=n;i++){
	cin >> s[i];
}
for (int i = 1; i<=n; i++){
	check (i,i,s[i],0);
}
cout << brp;
 
 
 
 
return 0;
}
 
