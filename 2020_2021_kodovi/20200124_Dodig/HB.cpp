#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

long long c;
string s,v="njem";
char t[30];
vector <string> rj;

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> s;
c= s.length();
for (int i = 0; i<c; i++){
	t[i]=s[i];
	if (t[i-1] == 'B' && t[i] == 'b')
		v= "eng";
}

if (v == "njem"){
	for (int i = 0; i<c; i++){
		if (s[i] == 'D' && s[i+1] == 'b'){
			rj.push_back ("C#");
			i++;
		}
		else if (s[i] == 'E' && s[i+1] == 'b'){
			rj.push_back ("D#");
			i++;
		}
		else if (s[i] == 'G' && s[i+1] == 'b'){
			rj.push_back ("F#");
			i++;
		}
		else if (s[i] == 'A' && s[i+1] == 'b'){
			rj.push_back ("G#");
			i++;
		}
		else if (s[i] == 'C' && s[i+1] == '#'){
			rj.push_back ("C#");
			i++;
		}
		else if (s[i] == 'D' && s[i+1] == '#'){
			rj.push_back ("D#");
			i++;
		}
		else if (s[i] == 'F' && s[i+1] == '#'){
			rj.push_back ("F#");
			i++;
		}
		else if (s[i] == 'G' && s[i+1] == '#'){
			rj.push_back ("G#");
			i++;
		}
		else if (s[i] == 'A' && s[i+1] == '#'){
			rj.push_back ("A#");
			i++;
		}
		else if (s[i] == 'B')
			rj.push_back ("A#");
		else if (s[i] == 'H')
			rj.push_back ("B");
		else if (s[i] == 'C')
			rj.push_back ("C");
		else if (s[i] == 'D')
			rj.push_back ("D");
		else if (s[i] == 'E')
			rj.push_back ("E");
		else if (s[i] == 'F')
			rj.push_back ("F");
		else if (s[i] == 'G')
			rj.push_back ("G");
		else if (s[i] == 'A')
			rj.push_back ("A");
	}
}

if (v == "eng"){
	for (int i = 0; i<c; i++){
		if (s[i] == 'D' && s[i+1] == 'b'){
			rj.push_back ("C#");
			i++;
		}
		else if (s[i] == 'B' && s[i+1] == 'b'){
			rj.push_back ("A#");
			i++;
		}
		else if (s[i] == 'E' && s[i+1] == 'b'){
			rj.push_back ("D#");
			i++;
		}
		else if (s[i] == 'G' && s[i+1] == 'b'){
			rj.push_back ("F#");
			i++;
		}
		else if (s[i] == 'A' && s[i+1] == 'b'){
			rj.push_back ("G#");
			i++;
		}
		else if (s[i] == 'C' && s[i+1] == '#'){
			rj.push_back ("C#");
			i++;
		}
		else if (s[i] == 'D' && s[i+1] == '#'){
			rj.push_back ("D#");
			i++;
		}
		else if (s[i] == 'F' && s[i+1] == '#'){
			rj.push_back ("F#");
			i++;
		}
		else if (s[i] == 'G' && s[i+1] == '#'){
			rj.push_back ("G#");
			i++;
		}
		else if (s[i] == 'A' && s[i+1] == '#'){
			rj.push_back ("A#");
			i++;
		}
		else if (s[i] == 'C')
			rj.push_back ("C");
		else if (s[i] == 'D')
			rj.push_back ("D");
		else if (s[i] == 'E')
			rj.push_back ("E");
		else if (s[i] == 'F')
			rj.push_back ("F");
		else if (s[i] == 'G')
			rj.push_back ("G");
		else if (s[i] == 'A')
			rj.push_back ("A");
		else if (s[i] == 'B')
			rj.push_back ("H");		
	}
}

for (int i = 0; i<rj.size(); i++)
	cout << rj[i];

return 0;
}



