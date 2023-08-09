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

string s,rj,dupli="1",sol;
ll str[150];

vector <char> rjesenje,krj;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

cin >> s;
int c = s.size();

for (int i = 0;i<c;i++)
    str[int(s[i])]++;
    
for (int i = 97;i<123;i++){
    if (str[i]!=0){
        ll br =i+1;
        while (str[i]!=0){
            rj+=char(i);
            str[i]--;
            for (int j = br; j<123; j++)
                if (str[j]>0){
                    rj+=char(j);
                    str[j]--;
                    j=123;
                }
        }
    }
}

c=rj.size();

for (int i = 0;i<c;i++){
    if (rj[i+1]==rj[i])
        dupli+=rj[i+1];
    else 
        sol+=rj[i];
}

// sort(dupli.begin(), dupli.end());

c= sol.size();
// cout << sol;

// for (int i = 0; i<rjesenje.size();i++)
//     cout << rjesenje[i];
// cout << endl;

for (int i = 0;i<c;i++){
    rjesenje.pb(sol[i]);
    for (int j = 0;j<dupli.size();j++)
        if (dupli[j] != rjesenje[rjesenje.size()-1] && dupli[j] != sol[i+1] && dupli[j] != '1' && int(dupli[j]) < int(sol[i+1])){
            rjesenje.pb(dupli[j]);
            dupli[j]='1';
        }
}

int cur = 0;

// for (int i = 0; i<rjesenje.size();i++)
//     cout << rjesenje[i];
// cout << endl;

for (int i = rjesenje.size()-1;i>=0;i--){
    krj.pb(rjesenje[i]);
    for (int j = dupli.size();j>0;j--)
        if(dupli[j] != krj[krj.size()-1] && dupli[j] != rjesenje[i-1] && dupli[j] !='1'){
            krj.pb(dupli[j]);
            dupli[j]='1';
        }
}



for (int i = 0;i<dupli.size();i++)
    if (dupli[i]!='1'){
        cout << -1;
        return 0;
    }
    


for (int i = krj.size()-1; i>=0;i--)
    cout << krj[i];

return 0;
}