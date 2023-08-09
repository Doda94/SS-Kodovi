#include<iostream>
#include<vector>
#include<bitset>
#define MAX 2500000
 
using namespace std;
 
bool check_turns(vector<int>& vecMove) {
    bitset<MAX+1> reach;
    int total = 0;
    reach[0] = 1;
    for (auto x : vecMove) {
        total += x;
        reach |= reach << x;
    }
    return total % 2 == 0 && reach[total / 2];
}
 
int main() {
 
    int n, x;
 
    scanf("%d", &n);
 
    vector<int> vecOdd, vecEven;
 
    vecOdd.reserve(n + 1);
    vecEven.reserve(n + 1);
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (i % 2 == 0) vecEven.push_back(x);
        else vecOdd.push_back(x);
    }
 
    bool check1 = check_turns(vecOdd);
    bool check2 = check_turns(vecEven);
 
    if (check1 && check2) printf("DA");
    else printf("NE");
 
    return 0;
}

