#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define pb push_back
#define fr(n) for (int i = 0; i<n;i++)

typedef long long ll;
using namespace std;

ll pot (ll q, ll w){
    ll qw = 1;
    for (ll i = 0; i<w; i++)
        qw*= q;
    return qw;
}

ll r,s,x,y,done;
char m[110][110],mm[10100];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> r >> s;

for (int i = 0;i<r;i++)
    for (int j = 0;j<s;j++){
        cin >> m[i][j];
        mm[s*i+j] = m[i][j];
        if (m[i][j] == 'o'){
            x=i;
            y=j;}
        }

done = 0;
ll br = 0,sol=99999999;
string rj = "NONE",krj="NONE";
ll cp = s*x+y+1;

while (done==0){
    br++;
    if (mm[cp] == '>')
        cp++;
    else if (mm[cp] == '^')
        cp-=s;
    else if (mm[cp] == 'v')
        cp+=s;
    else if (mm[cp] == '<')
        cp--;
    else if (mm[cp] == '.' || mm[cp]== 'o')
        done=1;
    else if (mm[cp]=='x'){
        rj = "E";
        done = 1;
    }
}

if (rj!="NONE"){
    if (br<sol)
    sol = br;
    krj=rj;
}

// --------------------------------------------------------------
rj="NONE";
br = 0;
done = 0;
cp = s*x+y-1;

while (done==0){
    br++;
    if (mm[cp] == '>')
        cp++;
    else if (mm[cp] == '^')
        cp-=s;
    else if (mm[cp] == 'v')
        cp+=s;
    else if (mm[cp] == '<')
        cp--;
    else if (mm[cp] == '.' || mm[cp]== 'o')
        done=1;
    else if (mm[cp]=='x'){
        rj = "W";
        done = 1;
    }
}

if (rj!="NONE"){
    if (br<sol){
    sol = br;
    krj=rj;
    }
}

// --------------------------------------------------------------
rj="NONE";
done = 0;
br = 0;
cp = s*x+y-s;

while (done==0){
    br++;
    if (mm[cp] == '>')
        cp++;
    else if (mm[cp] == '^')
        cp-=s;
    else if (mm[cp] == 'v')
        cp+=s;
    else if (mm[cp] == '<')
        cp--;
    else if (mm[cp] == '.' || mm[cp]== 'o')
        done=1;
    else if (mm[cp]=='x'){
        rj = "N";
        done = 1;
    }
}

if (rj!="NONE"){
    if (br<sol){
    sol = br;
    krj=rj;
    }
}

// --------------------------------------------------------------
rj="NONE";
br = 0;
done = 0;
cp = s*x+y+s;

while (done==0){
    br++;
    if (mm[cp] == '>')
        cp++;
    else if (mm[cp] == '^')
        cp-=s;
    else if (mm[cp] == 'v')
        cp+=s;
    else if (mm[cp] == '<')
        cp--;
    else if (mm[cp] == '.' || mm[cp]== 'o')
        done=1;
    else if (mm[cp]=='x'){
        rj = "S";
        done = 1;
    }
}

if (rj!="NONE"){
    if (br<sol){
    sol = br;
    krj=rj;
    }
}

if (krj == "NONE")
    cout << ":(";
else
{
    cout << ":) \n" << krj;
}

return 0;
}
