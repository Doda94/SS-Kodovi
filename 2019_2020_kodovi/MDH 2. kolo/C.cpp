#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

long long n,k,a[1010],b[1010];
vector <long long> vec;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> k;

for (int i = 0; i<n; i++)
	cin >> a[i];

for (int i = 0; i<n; i++){
	while (a[i] > b[i]){
		vec.push_back(i+1);
		for (int q = i; q<i+k; q++)
			b[q]++;
	}
}

cout << vec.size() << endl;
for (int i = 0; i<vec.size(); i++)
	cout << vec[i] << " ";

return 0;
}

