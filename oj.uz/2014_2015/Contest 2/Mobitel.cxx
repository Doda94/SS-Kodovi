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

int v[10];
string rijec,rj;
map <char,string> slova;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

for (int i = 1; i<=9;i++){
    int a;
    cin >> a;
    v[i] = a;
}

cin >> rijec;

slova['a']="2";
slova['b']="22";
slova['c']="222";
slova['d']="3";
slova['e']="33";
slova['f']="333";
slova['g']="4";
slova['h']="44";
slova['i']="444";
slova['j']="5";
slova['k']="55";
slova['l']="555";
slova['m']="6";
slova['n']="66";
slova['o']="666";
slova['p']="7";
slova['q']="77";
slova['r']="777";
slova['s']="7777";
slova['t']="8";
slova['u']="88";
slova['v']="888";
slova['w']="9";
slova['x']="99";
slova['y']="999";
slova['z']="9999";

fr(rijec.size()){
    char a = rijec[i];
    string s = slova[a];
    int l = s.size();
    char br= s[0];
    int broj = int(br)-int('0');
    int nbr;
    for (int j = 1;j<10;j++)
        if (v[j] == broj)
            nbr = j;
    // int nbr = v[broj];
    nbr += int('0');
    br = static_cast<char>(nbr);
    int len = rj.size();
    if (rj[len-1] == br)
        rj+='#';
    for (int j = 0;j<l;j++)
        rj+=br;
}


cout << rj;


return 0;
}