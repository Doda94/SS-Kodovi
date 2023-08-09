/*
Za zadani broj N, ucitati N stringova.
Izbaciti duplikate i za svaki string prebrojati koliko se puta pojavljuje.
*/

#include<iostream>
#include<cstdio>
#include<string>
#include<set>
#include<map>

using namespace std;

int n;
string s;
set<string> sol;
map<string, int> freq;

int main() {
    scanf("%d", &n);
    while(n--) {
        cin >> s;
        sol.insert(s);
        freq[s]++;
    }
    for(set<string>::iterator it = sol.begin(); it != sol.end(); it++)
        cout << *it << " " << freq[*it] << endl;
    return 0;
}
