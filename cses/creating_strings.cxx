#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstring>
#define pb push_back
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

vector <string> sol;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string s; cin >> s;
sort (s.begin(),s.end());

do 
    sol.pb(s);
while(next_permutation(s.begin(),s.end()));
    
sort (sol.begin(),sol.end());

cout << sol.size() <<endl;
repeat (sol.size())
    cout << sol[i]<<endl;

return 0;
}