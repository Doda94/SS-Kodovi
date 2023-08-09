#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
#include <sstream>
using namespace std;
typedef long long ll;

string inttostring(ll qw)
{
	std::stringstream ss;
	ss << qw;
	return ss.str();
}

ll n;
string s[10100];

vector <string> rje;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
for (int i = 0; i<n; i++)
	cin >> s[i];

for (int i = 0; i<n; i++){
	string str = s[i];
	ll t = int(str[6])-'0';
	ll s = int(str[7])-'0';
	ll d = int(str[8])-'0';
	ll j = int(str[9])-'0';
	ll rj = 0;
	ll broj = t*1000+s*100+d*10+j;
	broj++;
	ll mj = broj/1000+ broj/100%10*10;
	ll dan = broj%10*10+broj%100/10;
//	cout << dan;
//	cout << mj;
	while (rj == 0){
		if (mj > 12){
			broj++;
			mj = broj/1000+ broj/100%10*10;
			dan = broj%10*10+broj%100/10;
		}
//		else if (mj == 2 && broj%4 != 0 && dan > 28){
//			broj++;
//			mj = broj/1000+ broj/100%10*10;
//			dan = broj%10*10+broj%100/10;
//		}
//		else if (mj == 2 && broj%4 == 0 && dan > 29){
//			broj++;
//			mj = broj/1000+ broj/100%10*10;
//			dan = broj%10*10+broj%100/10;
//		}
		else{
			if (mj == 1 || mj == 3 || mj == 5 || mj == 7 || mj == 8 || mj == 10 || mj == 12){
				if (dan > 31|| dan == 0 || mj == 0){
					broj ++;
					mj = broj/1000+ broj/100%10*10;
					dan = broj%10*10+broj%100/10;
					}
				else{
					string srj;
					if (dan/10 > 0 && mj/10 > 0 && broj/1000 > 0)
					srj = inttostring(dan) + "." + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 > 0 && broj/1000 == 0)
					srj = inttostring(dan) + "." + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 > 0 && broj/1000 > 0)
					srj = "0" + inttostring(dan) + "." + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 > 0 && broj/1000 == 0)
					srj = "0" + inttostring(dan) + "." + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 == 0 && broj/1000 > 0)
					srj = "0" + inttostring(dan) + "." + "0" + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 == 0 && broj/1000 == 0)
					srj = "0" + inttostring(dan) + "." + "0" + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 == 0 && broj/1000 > 0)
					srj = inttostring(dan) + "." + "0"+ inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 == 0 && broj/1000 == 0)
					srj = inttostring(dan) + "." + "0"+ inttostring(mj) + "." + "0" +inttostring (broj) + ".";
					rje.push_back(srj);
					rj = 1;
				}
			}
			else {
				if (dan > 30 || dan == 0 || mj == 0){
					broj ++;
					mj = broj/1000+ broj/100%10*10;
					dan = broj%10*10+broj%100/10;
					}
				else{
					string srj;
					if (dan/10 > 0 && mj/10 > 0 && broj/1000 > 0)
					srj = inttostring(dan) + "." + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 > 0 && broj/1000 == 0)
					srj = inttostring(dan) + "." + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 > 0 && broj/1000 > 0)
					srj = "0" + inttostring(dan) + "." + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 > 0 && broj/1000 == 0)
					srj = "0" + inttostring(dan) + "." + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 == 0 && broj/1000 > 0)
					srj = "0" + inttostring(dan) + "." + "0" + inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 == 0 && mj/10 == 0 && broj/1000 == 0)
					srj = "0" + inttostring(dan) + "." + "0" + inttostring(mj) + "." + "0" + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 == 0 && broj/1000 > 0)
					srj = inttostring(dan) + "." + "0"+ inttostring(mj) + "." + inttostring (broj) + ".";
					else if (dan/10 > 0 && mj/10 == 0 && broj/1000 == 0)
					srj = inttostring(dan) + "." + "0"+ inttostring(mj) + "." + "0" +inttostring (broj) + ".";
					rje.push_back(srj);
					rj = 1;
				}
			}
			
		}
	}
}

for (int i = 0; i<rje.size(); i++)
	cout << rje[i] << endl;

return 0;
}

