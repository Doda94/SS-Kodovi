#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

long long n,k,r[2000],br,uk,ri[2000];
string a;
vector <string> vec;

int main () {
//  freopen( "word.in", "r", stdin );
//  freopen( "word.out", "w", stdout );

ios_base::sync_with_stdio(false);
cin.tie(NULL);    cout.tie(NULL);

cin >> n >> k >> a;
int i = 0;
while (i < n){
	char c = a[br];
	if (c == ' '){
		br++;
		i++;
	}
	else{
		ri[i]++;
		br++;
	}
}



cout << ri[0];


return 0;
}

