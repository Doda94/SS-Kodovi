#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,k,i;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

while (n!=0){	
	if (n % k == 0){
		n /= k;
		i++;
	}
	else{
		i += n%k;
		n -= n%k;
	}
}

cout << i;

return 0;
}

