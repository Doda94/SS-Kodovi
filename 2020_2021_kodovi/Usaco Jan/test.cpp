#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);


ll br = 0;
ll a[] = {1,2,5,3,4,6,7,8,9,10};
while (next_permutation(a,a+10))
    br++;



cout << br;
return 0;
}