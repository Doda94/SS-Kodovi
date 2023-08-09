#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#define pb push_back
#define fr(j,n,s) for (int i = j; i<n;i+=s)
#define repeat(n) for (int i = 0; i<n;i++)
typedef long long ll;
using namespace std;

string s[650];
bool f[650];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

fr(0,649,1){
    string a;
    getline (cin,a);
    s[i]=a;
}
bool done = 0;
int poz=0,acc=0;
while(done==0){
    if (s[poz][0] == 'a'){
        if (f[poz] == 0)
            f[poz]=1;
        else{
            cout << poz << endl;
        }
        string broj;
        fr(5,s[poz].size(),1){
            broj+=s[poz][i];
        }
        stringstream ss(broj);
        int x=0;
        ss >> x;
		if (s[poz][4]=='+')
        	acc+=x;
		else
			acc-=x;
	}
    else if (s[poz][0]=='j'){
        string broj;
        fr(5,s[poz].size(),1){
            broj+=s[poz][i];
        }
        stringstream ss(broj);
        int x=0;
        ss >> x;
		if (s[poz][4]=='+')
        	poz+=x;
		else
			poz-=x;
		continue;
    }
    poz+=1;
}


cout << acc;


//debugging
// cout << "----------------------------------------------------";
// fr(0,649,1){
//     cout << s[i] << endl;
// }
return 0;
}