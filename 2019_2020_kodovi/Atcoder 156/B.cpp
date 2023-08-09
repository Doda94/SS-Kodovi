#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

ll zbr,n,k;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

while (n>0){
	n/=k;
	zbr++;
}

cout << zbr;


return 0;
}

