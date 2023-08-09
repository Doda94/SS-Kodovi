    #include <iostream>
    #include <algorithm>
    #include <cmath>
    #include <string>
    #include <vector>
    using namespace std;
     
    long long n,m,tocka;
    char broj[100005];
    int rj[100005],sol[100005];
    vector <int> priv;
     
    int pot (long long qwert, long long poiu){
    	int asdf = qwert;
    	qwert = 1;
    	for (int fgh = 0; fgh<poiu; fgh++)
    		qwert *= asdf;
    	return qwert;
    }
     
    int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    cin >> n >> m ;
    for (int i = 1; i<=n; i++){
    	cin >> broj[i];
    	rj[i] = int(broj[i]) - '0';
    	if (rj[i] == -2)
    		tocka = i;
    }
     
     
     
    int mjesto = tocka+m+1;
    int dalje;
     
    if (rj[mjesto] >= 5)
    	dalje = 1;
    else 
    	dalje = 0;
    	
    for (int i = mjesto-1; i>0; i--){
    	if (rj[i] == -2){
    		priv.push_back(69);
    		continue;
    	}
    	if (rj[i] + dalje == 10){
    		priv.push_back(0);
    		dalje = 1;
    	}
    	else {
    		priv.push_back(rj[i] + dalje);
    		dalje = 0;
    	}
    	
    }
     
    //for (int i = 1; i<tocka-1; i++){
    //	sol[i] = rj[i];
    //	cout << sol[i];
    //}
    //if (dalje == 1)
    //	cout << rj[tocka-1]+1;
    //else
    //	cout << rj[tocka-1];
    //cout << '.';	
     
    for (int i = priv.size()-1; i>=0; i--)
    	if (priv[i] == 69)
    		cout << '.';
    	else 
    		cout << priv[i];
     
     
    return 0;
    }
     
