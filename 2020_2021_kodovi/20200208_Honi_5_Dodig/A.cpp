#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long n;
vector <long long> veki;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 0; i<n; i++){
	long long brd;
	string s;
	cin >> brd;
	cin >> s;
	if (s == "SIJECANJ")
		veki.push_back(brd);
	else if (s == "VELJACA")
		veki.push_back(brd+30);
	else if (s == "OZUJAK")
		veki.push_back(brd+60);
	else if (s == "TRAVANJ")
		veki.push_back(brd+90);
	else if (s == "SVIBANJ")
		veki.push_back(brd+120);
	else if (s == "LIPANJ")
		veki.push_back(brd+150);
	else if (s == "SRPANJ")
		veki.push_back(brd+180);
	else if (s == "KOLOVOZ")
		veki.push_back(brd+210);
	else if (s == "RUJAN")
		veki.push_back(brd+240);
	else if (s == "LISTOPAD")
		veki.push_back(brd+270);
	else if (s == "STUDENI")
		veki.push_back(brd+300);
	else if (s == "PROSINAC")
		veki.push_back(brd+330);
		
//	cout << veki[i] << endl;
}

for (int i = 0; i<veki.size(); i++)
	if (veki[i] % 2 == 0) 
		cout << "BROKULA" << endl;
	else 
		cout << "MRKVA" << endl;



return 0;
}

