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
#define repeat(n) for (int i = 0; i<n;i++)
#define fr(n,j,k) for (int i = n; i<j;i+=k)
typedef long long ll;
using namespace std;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll n; cin >> n;
ll currSection=0,currSubSection=0,currSubSubSection=0;
repeat (n){
    string type,section; cin >> type >> section; 
    if (type=="section"){
        currSection+=1;
        currSubSection=0;
        currSubSubSection=0;
        cout << currSection << " " << section << "\n";    
    }
    else if (type=="subsection"){
        currSubSection+=1;
        currSubSubSection=0;
        cout << currSection<<"."<<currSubSection<< " "<< section <<"\n";
    }
    else if (type=="subsubsection"){
        currSubSubSection+=1;
        cout << currSection<<"."<<currSubSection<<"."<<currSubSubSection<< " "<<section <<"\n";
    }
}




return 0;
}