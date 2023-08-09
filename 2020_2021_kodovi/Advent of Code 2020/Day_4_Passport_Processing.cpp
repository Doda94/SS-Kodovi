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

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
string a,s;
ll br=0;
while (getline(cin,a)){
    if (a=="696969")
        break;
    s+=a;
    ll ecl = 0;
    ll pid =0;
    ll eyr = 0;
    ll hcl = 0;
    ll byr = 0;
    ll iyr = 0;
    ll hgt = 0;
    std::size_t found = s.find("ecl");
    if (found != string::npos){
        int pos = static_cast<int> (found);
        string str = s[pos+4]+s[pos+5]+s[pos+6];
        if (str == "amb" or str == "blu" or str == "brn" or str == "gry" or str == "grn" orstr == "hzl" or str == "oth")
            ecl+=1;
        }
    std::size_t found = s.find("pid");
    if (found != string::npos){
        int pos = static_cast<int> (found);
        int brojac=0,i=pos;
        while (int(s[i]) >= int('0') && int(s[i]) <= int('9')){
                i++;
                brojac++;
        }
        if (brojac==9)
            pid+=1;
    }

    std::size_t found = s.find("eyr");
    if (found != string::npos){
        string broj;
        broj+=s[found+4];
        broj+=s[found+5];
        broj+=s[found+6];
        broj+=s[found+7];
        int x = 0;
        stringstream ss(broj);
        ss >> x;
        if (x>=2020 && x<=2030)
            eyr+=1;
        }
    std::size_t found = s.find("hcl");
    if (found != string::npos){
        int pos = static_cast<int> (found);
        if (s[pos+=4]=="#")
            if (int(s[pos+=5]) >= int('0') && int(s[pos+=5]) <= int('0') || int(s[pos+=5]) >= int('a') && int(s[pos+=5]) <= int('f') )
                if (int(s[pos+=6]) >= int('0') && int(s[pos+=6]) <= int('0') || int(s[pos+=6]) >= int('a') && int(s[pos+=6]) <= int('f') )
                    if (int(s[pos+=7]) >= int('0') && int(s[pos+=7]) <= int('0') || int(s[pos+=7]) >= int('a') && int(s[pos+=7]) <= int('f') )
                        if (int(s[pos+=8]) >= int('0') && int(s[pos+=8]) <= int('0') || int(s[pos+=8]) >= int('a') && int(s[pos+=8]) <= int('f') )
                            if (int(s[pos+=9]) >= int('0') && int(s[pos+=9]) <= int('0') || int(s[pos+=9]) >= int('a') && int(s[pos+=9]) <= int('f') )
                                if (int(s[pos+=10]) >= int('0') && int(s[pos+=10]) <= int('0') || int(s[pos+=10]) >= int('a') && int(s[pos+=10]) <= int('f') )
                                    if(int(s[pos+=11])  == " ")
                                        hcl+=1;
    }
    std::size_t found = s.find("byr");
    if (found != string::npos){
        string broj;
        broj+=s[found+4];
        broj+=s[found+5];
        broj+=s[found+6];
        broj+=s[found+7];
        int x = 0;
        stringstream ss(broj);
        ss >> x;
        if (x>=1920 && x<=2002)
            byr+=1;
        }
    std::size_t found = s.find("iyr");
    if (found != string::npos){
        string broj;
        broj+=s[found+4];
        broj+=s[found+5];
        broj+=s[found+6];
        broj+=s[found+7];
        int x = 0;
        stringstream ss(broj);
        ss >> x;
        if (x>=2010 && x<=2020)
            iyr+=1;
        }
    std::size_t found = s.find("hgt");
    if (found != string::npos){
        int pos = static_cast<int> (found);
        int pp = pos;
        while (s[pos] != " ")
            pos++
        string v="0";
        if (pos-1=="n")
            v="i";
        else if (pos-1=="m")
            v="c"
        string broj;
        while (s[pp] != "c" || s[pp] != "i" || s[pp] != " "){
            broj+=s[pp];
            pp++;
        }
        int x = 0;
        stringstream ss(broj);
        ss >> x;
        if (v=="i")
            if (x>=59 && x<=76)
                hgt+=1;
        if (v=="c")
            if (x>=159 && x<=193)
                hgt+=1;
        }

    if (a==""){
        if (ecl==1 && pid==1 && eyr==1 && hcl==1 && byr==1 && iyr==1 && hgt==1)
            br++;
        s="";
        ecl=0;pid=0;eyr=0;hcl=0;byr=0;iyr=0;hgt=0;
    }
}

cout << br;



return 0;
}
