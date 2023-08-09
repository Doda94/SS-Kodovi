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
#define pop_front(n) (n.erase(n.begin(),n.begin()+1))
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

bool moze = 0;
queue <string> qstr;
queue <ll> qk;
queue <ll> qca,qcb;
queue <bool> qtp;

void rjesi (string str,ll k,ll ca, ll cb,bool tp){
    // cout << str << " " << k << " " << ca << " " << cb << " " << tp << endl;
    if (!moze){
        if (ca<k){
            if (cb>=k)
                moze=true;
            string nstr=str;
            pop_front(nstr);
            bool ima_plavi = false;
            if (str[0]=='P'){
                if (tp){
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb);
                    qtp.push(0);
                }
                else{
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb);
                    qtp.push(1);
                }
                ima_plavi=true;
            }
            nstr = str;
            nstr.pop_back();
            if (str[str.size()-1]=='P'){
                if (tp){
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb);
                    qtp.push(0);
                }
                else{
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb);
                    qtp.push(1);
                }
                ima_plavi=true;
            }
            nstr = str;
            nstr.pop_back();
            if (str[str.size()-1]=='C' && !ima_plavi)
                if (tp){
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca+1);
                    qcb.push(cb);
                    qtp.push(0);
                }
                else{
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb+1);
                    qtp.push(1);
                }
            nstr=str;
            pop_front(nstr);
            if (str[0]=='C' && !ima_plavi)
                if (tp){
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca+1);
                    qcb.push(cb);
                    qtp.push(0);
                }
                else{
                    qstr.push(nstr);
                    qk.push(k);
                    qca.push(ca);
                    qcb.push(cb+1);
                    qtp.push(1);
                }
        }
    }
}

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n,qwe; cin >> n >> qwe;
string s; cin >> s;

string as;
ll k1,ca1,cb1;
bool tp1 = 1;
as = s;
k1 = qwe;
ca1 = 0;
cb1 = 0;
tp1 = 1;
rjesi (as,k1,ca1,cb1,tp1);
while (!qstr.empty()){
    as=qstr.front();
    qstr.pop();
    k1=qk.front();
    qk.pop();
    ca1=qca.front();
    qca.pop();
    cb1=qcb.front();
    qcb.pop();
    tp1=qtp.front();
    qtp.pop();
    rjesi (as,k1,ca1,cb1,tp1);
}

if (moze)
    cout << "DA";
else 
    cout << "NE";

return 0;
}