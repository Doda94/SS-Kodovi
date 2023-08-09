#include <bits/stdc++.h>

#define pb push_back
typedef long long ll;

using namespace std;

map <string, pair<string, double> > rv;
map <string, vector<pair<double, string> > > sol;
set <string> drzave;

bool msf (pair <double, string> a, pair <double, string> b){
    if (a.first < b.first)
        return a.first < b.first;
    else
        return a.second < b.second;
}

string tockaUZarez(string s){
    string cijena = "";
        ll stop = 0;
    for (int i = 0; i<s.size(); i++){
        (s[i]=='.') ? (cijena+=',') : (cijena+=s[i]);
        if (stop)
            stop++;
        if (s[i]=='.')
            stop++;
        if (stop>2)
            break;
    }
    return cijena;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  ll n; cin >> n;

  for (int i=0; i<n; i++){
    string s; cin >> s;
    ll br = 0;
    string proizvod, drzava, cijena;
    for (auto c: s){
        if (c == '-')
            br++;
        else
            if (br == 0)
                proizvod += c;
            else if (br == 1)
                drzava += c;
            else
                if (c==',')
                    cijena += '.';
                else
                    cijena += c;
    }
        
        double price = stod(cijena);
        
        if (rv.find(proizvod) == rv.end())
            rv[proizvod] = {drzava, price};
        else if (rv[proizvod].second > price)
            rv[proizvod] = {drzava, price};

  }

  for (auto it: rv){
        drzave.insert(it.second.first);
        sol[it.second.first].push_back(pair<double, string>(it.second.second, it.first));
    }

    for (auto it: drzave){
        sort (sol[it].begin(), sol[it].end(), msf);
        for (int i = 0; i<sol[it].size(); i++){
            string cijena = tockaUZarez(to_string(sol[it][i].first));
            cout << sol[it][i].second << "-" << it << "-" << cijena << "\n";
        }
    }

  return 0;
}