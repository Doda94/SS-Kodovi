#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>

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

string s;
ll pam;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> s;
if (s[8] == 'A')
        pam = 0;
else pam = 1;

int h = int(s[0]-'0')*10+int(s[1]-'0');
int m = int(s[3]-'0')*10+int(s[4]-'0');
int ss = int(s[6]-'0')*10+int(s[7]-'0');

if (pam == 1){
    if(h<12)
        h+=12;
    if (h==24) h=0;
    string hs;
    if (h/10==0){
        hs+='0';
        hs+=to_string(h);
    }
    else hs+=to_string(h);
    string ms;
    if (m/10==0){
        ms+='0';
        ms+=to_string(m);
    }
    else ms+=to_string(m);
    string sss;
    if (ss/10==0){
        sss+='0';
        sss+=to_string(ss);
    }
    else sss+=to_string(ss);
    cout << hs<< ":" << ms<<":"<<sss;
}
else{
    if (h==12) h=0;
    string hs;
    if (h/10==0){
        hs+='0';
        hs+=to_string(h);
    }
    else hs+=to_string(h);
    string ms;
    if (m/10==0){
        ms+='0';
        ms+=to_string(m);
    }
    else ms+=to_string(m);
    string sss;
    if (ss/10==0){
        sss+='0';
        sss+=to_string(ss);
    }
    else sss+=to_string(ss);
    cout << hs<< ":" << ms<<":"<<sss;
}



return 0;
}

