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

bool byrbroj (int x, string str){
    ll broj =0;
    broj+= 1000*(int(str[x+4])-int('0'));
    broj+= 100*(int(str[x+5])-int('0'));
    broj+= 10*(int(str[x+6])-int('0'));
    broj+= 1*(int(str[x+7])-int('0'));
    // cout << broj << endl;
    if (broj >= 1920 && broj <= 2002)
        return true;
    else
        return false;
}

bool iyrbroj (int x, string str){
    ll broj =0;
    broj+= 1000*(int(str[x+4])-int('0'));
    broj+= 100*(int(str[x+5])-int('0'));
    broj+= 10*(int(str[x+6])-int('0'));
    broj+= 1*(int(str[x+7])-int('0'));
    if (broj >= 2010 && broj <= 2020)
        return true;
    else
        return false;
}

bool eyrbroj (int x, string str){
    ll broj =0;
    broj+= 1000*int((str[x+4])-int('0'));
    broj+= 100*int((str[x+5])-int('0'));
    broj+= 10*int((str[x+6])-int('0'));
    broj+= 1*int((str[x+7])-int('0'));
    if (broj >= 2020 && broj <= 2030)
        return true;
    else
        return false;
}

bool hgtbroj (int x, string str){
    x+=4;
    string broj;
    int brojcek=0;
    while(int(str[x]) >= int ('0') && int(str[x]) <= int('9')){
        broj+=str[x];
        x++;
    }
    stringstream ss(broj);
    ss >> brojcek;
    // cout << brojcek << " " << str[x];
    if (str[x] == 'i')
        if (brojcek >= 59 && brojcek <=76)
            return true;
        else
            return false;
    else if(str[x] == 'c')
        if (brojcek >= 150 && brojcek <=193)
            return true;
        else
            return false;
    else
        return false;
}

bool hclbroj (int x, string str){
    x+=5;
    int poc = x-1;
    ll brojacznam = 0;
    fr(x,x+6,1)
        if ((int(str[i]) >= int('0') && int(str[i]) <= int('9')) || (int(str[i]) >= int('a') && int(str[i]) <= int('f')))
            brojacznam++;
    if (brojacznam==6 && str[poc]=='#')
        return true;
    else
        return false;

}

bool eclbroj (int x ,string str){
    x+=4;
    string boja;
    while (str[x] != ' '){
        boja+=str[x];
        x++;
    }
    if (boja=="amb" || boja=="blu" || boja=="brn" || boja=="gry" ||boja=="grn" || boja=="hzl" || boja=="oth")
        return true;
    else
        return false;
}

bool pidbroj (int x ,string str){
    x+=4;
    string id;
    while (str[x] != ' '){
        id+=str[x];
        x++;
    }
    ll brojacznam=0;
    // cout << id;
    fr(0,id.size(),1){
        if ((int(id[i]) >= int('0')) && (int(id[i]) <= int('9'))){
            brojacznam++;}
        // cout << str[i] << endl;
    }
    // cout << endl << brojacznam;
    if (brojacznam==9)
        return true;
    else
        return false;

}

ll br;

int main () {
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

string a= " ";
while (true){
    string s;
    while (int(a[0])!=0){
        getline(cin,a);
        s+=a;
    }
    
// ispod ove linije je ok ali ovo iznad ne valja jer jebeno ne znas unijeti

    int byr = s.find("byr");
    int iyr = s.find("iyr");
    int eyr = s.find("eyr");
    int hgt = s.find("hgt");
    int hcl = s.find("hcl");
    int ecl = s.find("ecl");
    int pid = s.find("pid");

    int ukupno=0;
    if (byrbroj(byr,s)==true)
        ukupno++;
    if(iyrbroj(iyr,s)==true)
        ukupno++;
    if (eyrbroj(eyr,s)==true)
        ukupno++;
    if (hgtbroj(hgt,s)==true)
        ukupno++;
    if (eclbroj(ecl,s)==true)
        ukupno++;
    if (hclbroj(hcl,s)==true)
        ukupno++;
    if (pidbroj(pid,s)==true)
        ukupno++;

    if (ukupno==7)
        br++;

    // cout << ukupno << endl;


}

cout << 69;


// debugging dio --------------------------------------------------------------------------------------------------------------------

// a="pid:087499704 hgt:74in ecl:grn iyr:2012 eyr:2030 byr:1980 hcl:#623a2f";
// string s =a;
// int byr = s.find("byr");
// int iyr = s.find("iyr");
// int eyr = s.find("eyr");
// int hgt = s.find("hgt");
// int hcl = s.find("hcl");
// int ecl = s.find("ecl");
// int pid = s.find("pid");

// int ukupno=0;
//     if (byrbroj(byr,s)==true)
//         ukupno++;
//     if(iyrbroj(iyr,s)==true)
//         ukupno++;
//     if (eyrbroj(eyr,s)==true)
//         ukupno++;
//     if (hgtbroj(hgt,s)==true)
//         ukupno++;
//     if (eclbroj(ecl,s)==true)
//         ukupno++;
//     if (hclbroj(hcl,s)==true)
//         ukupno++;
//     if (pidbroj(pid,s)==true)
//         ukupno++;

// cout << ukupno;

//  cout << pidbroj(pid,s);



return 0;
}