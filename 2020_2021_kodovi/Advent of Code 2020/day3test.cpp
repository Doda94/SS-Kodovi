#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
#define JASAMBRZINA ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

string s[324];
ll br,br2,br3,br4,br5;

int main () {
JASAMBRZINA

fr(0,11,1){
    string str;
    cin >> str;
    s[i]=str;
    for (int j =0;j<6969;j++)
        s[i]+=str;
}

ll x= 0;
fr (0,11,1){
    if (s[i][x] == '#')
        br++;
    x+=3;
}

fr (0,11,1){
    if (s[i][x] == '#')
        br2++;
    x+=1;
}

fr (0,11,1){
    if (s[i][x] == '#')
        br3++;
    x+=5;
}

fr (0,11,1){
    if (s[i][x] == '#')
        br4++;
    x+=7;
}


cout << br*br2*br3*br4*(br2/2)<<endl<<br<<endl<<br2<<endl<<br3<<endl<<br4<<endl<<br5;



return 0;
}
