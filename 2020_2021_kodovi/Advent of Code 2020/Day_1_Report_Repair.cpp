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
typedef long long ll;
using namespace std;

vector <ll> veki;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll a;
while (cin >> a)
    veki.pb(a);

ll n = veki.size(),suma=0;
// cout << n;
for(int i = 0;i<n;i++){
    suma=veki[i];
    for (int j = 0; j<n;j++){
        for (int k = 0; k<n;k++){
            if (k!=i && k!=j && i!=j){
                suma+=veki[k]+veki[j];
                if (suma == 2020){
                    cout << veki [i]*veki[j]*veki[k];
                    // cout << veki[i] << endl << veki[j] << endl << veki[k] << endl << suma;
                    return 0;
                }
                else 
                    suma-=veki[k]+veki[j];
            }
            else
                continue;
        }
        }
    }
    



return 0;
}