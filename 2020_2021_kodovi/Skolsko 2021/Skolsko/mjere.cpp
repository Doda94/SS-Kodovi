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

ll a,b,done[20][20],rj;
char x[20][20];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> a >> b;

for (int i = 0;i<a;i++)
    for (int j = 0; j<b;j++)
        cin >> x[i][j];


for (int i = 0;i<a;i++)
    for (int j = 0; j<b;j++){
        if (x[i][j] == '#' && i!=0 && j!=0 && i!=a-1 && j!=b-1){
            done[i][j]=1;
            if (x[i][j+1]=='#' && done[i][j+1]==0){
                done[i][j+1]=1;
                if (x[i-1][j-1]=='.' && x[i-1][j]=='.' && x[i-1][j+1]=='.' && x[i-1][j+2]=='.' && x[i][j-1]=='.' && x[i][j+2]=='.' && x[i+1][j-1]=='.' && x[i+1][j]=='.' && x[i+1][j+1]=='.' && x[i+1][j+2]=='.')
                    rj++;
            }
        }
    }

cout << rj;

return 0;
}