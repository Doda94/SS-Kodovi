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

ll z[46];

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

z[1]=1;z[2]=2;z[3]=3;z[4]=4;z[5]=5;z[6]=6;z[7]=7;z[8]=8;z[9]=9;z[10]=19;z[11]=29;z[12]=39;z[13]=49;z[14]=59;z[15]=69;z[16]=79;z[17]=89;z[18]=189;z[19]=289;z[20]=389;z[21]=489;z[22]=589;z[23]=689;z[24]=789;z[25]=1789;z[26]=2789;z[27]=3789;z[28]=4789;z[29]=5789;z[30]=6789;z[31]=16789;z[32]=26789;z[33]=36789;z[34]=46789;z[35]=56789;z[36]=156789;z[37]=256789;z[38]=356789;z[39]=456789;z[40]=1456789;z[41]=2456789;z[42]=3456789;z[43]=13456789;z[44]=23456789;z[45]=123456789;

ll q; cin >> q;

repeat (q){
    ll a; cin >> a;
    if (a > 45)
        cout << 37373747<<endl;
    else 
        cout << z[a]<< endl;
}




return 0;
}