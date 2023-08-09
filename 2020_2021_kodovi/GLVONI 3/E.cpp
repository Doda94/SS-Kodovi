#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int n,m;
string s,rj[404],ton[55][404];

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n >> m >> s;

for (int i = 0; i<m; i++){
	int f[20]; // 17
	for (int k = 0; k<20; k++)
		f[k] = 0;				 
	for (int k = 0; k<n; k++){
		string c;
		cin >> c;
		if (c == "C") f[1]++;
		else if (c == "D") f[2]++;
		else if (c == "E") f[3]++;
		else if (c == "F") f[4]++;
		else if (c == "G") f[5]++;
		else if (c == "A") f[6]++;
		else if (c == "H") f[7]++;
		else if (c == "C#")f[8]++;
		else if (c == "D#")f[9]++;
		else if (c == "F#")f[10]++;
		else if (c == "G#")f[11]++;
		else if (c == "A#")f[12]++;
		else if (c == "Db")f[13]++;
		else if (c == "Eb")f[14]++;
		else if (c == "Gb")f[15]++;
		else if (c == "Ab")f[16]++;
		else if (c == "B")f[17]++;
	}
	int najm = 100;
	int mj;
	for (int k = 1; k<18; k++){
		if (f[k] < najm && f[k] > 0){
			najm = f[k]; 
			mj = k;
		}
	}
//	cout << i << " " << najm <<" "<< mj << endl;
//cout << mj << "\n";
	if (mj == 1)
		rj[i] = "C";
	else if (mj == 2)
		rj[i] = "D";
	else if (mj == 3)
		rj[i] = "E";
	else if (mj == 4)
		rj[i] = "F";
	else if (mj == 5)
		rj[i] = "G";
	else if (mj == 6)
		rj[i] = "A";
	else if (mj == 7)
		rj[i] = "H";
	else if (mj == 8)
		rj[i] = "C#";
	else if (mj == 9)
		rj[i] = "D#";
	else if (mj == 10)
		rj[i] = "F#";
	else if (mj == 11)
		rj[i] = "G#";
	else if (mj == 12)
		rj[i] = "A#";
	else if (mj == 13)
		rj[i] = "Db";
	else if (mj == 14)
		rj[i] = "Eb";
	else if (mj == 15)
		rj[i] = "Gb";
	else if (mj == 16)
		rj[i] = "Ab";
	else if (mj == 17)
		rj[i] = "B";	
		
//	cout << rj[i] << endl;
}

for (int i = 0; i<m; i++)
	cout << rj[i] << endl;


return 0;
}

