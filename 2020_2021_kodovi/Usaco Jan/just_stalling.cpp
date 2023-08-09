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

ll s[25],s1[25],rj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int n;
cin >> n;

for (int i = 0; i<n;i++)
	cin >> s[i];

for (int i = 0;i<n;i++)
    cin >> s1[i];

ll legit=0;
for (int i =0;i<n;i++)
    if (s[i]>s1[i])
        legit++;
    if (legit == 0)
        rj++;


while(next_permutation(s,s+n)){
    legit=0;
    for (int i =0;i<n;i++)
        if (s[i]>s1[i])
            legit++;
    if (legit == 0)
        rj++;
}


cout << rj;





return 0;
}