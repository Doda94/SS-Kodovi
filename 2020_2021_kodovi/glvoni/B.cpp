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
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

map<string,bool> postoji;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
ll br = 0 ;

repeat (n+1){
    string s,rijec;
    bool skip = 0;
    getline(cin,s);
    for(int j = 0;j<s.size();j++){
        if (s[j]!=' ')
            rijec+=s[j];
        else{
            if (rijec=="i" || rijec=="sa"){
                skip=0;
                rijec="";
                continue;    
            }
            else if (rijec=="u" || rijec=="na"){
                skip=1;
                rijec="";
                continue;
            }
            if (skip==0)
                if (postoji[rijec]==0){
                    postoji[rijec]=1;
                    // cout << "br++ " << rijec << endl;
                    br++;
                    rijec="";
                }
                else 
                    rijec="";
            
        }
    }
}


cout << br;

return 0;
}