#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
typedef long long ll;

char a[50][50];
bool done = 0;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n;
cin >> n;
for (int i = 0; i<n;i++)
    for (int j =0;j<n;j++)
        cin >> a[i][j];
        
for (int i = 0; i<n;i++)
    for (int j =0;j<n;j++){
        if (a[i][j]=='.' && a[i][j+1]=='.' && a[i][j+2]=='.' && a[i-1][j+1]=='.' && a[i+1][j+1]=='.'){
        	a[i][j]='#';
        	a[i][j+1]='#';
            a[i+1][j+1]='#';
            a[i-1][j+1]='#';
            a[i][j+2]='#';
        }
    }

for (int i = 0; i<n;i++)
    for (int j =0;j<n;j++)
    	if (a[i][j]=='.')
    		done=1;
    		
if (done)
	cout << "NO";
else
	cout << "YES";






return 0;
}

