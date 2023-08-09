#include <bits/stdc++.h>

using namespace std;

int x[2885], y[2885], A, B, t, brpp, rez, vodi, preokret;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> A;
  for (int i = 0; i < A; i++){
  	cin >> t;
  	x[t] = 1;
	}
	cin >> B;
	for (int i = 0; i < B; i++){
  	cin >> t;
  	y[t] = 1;
	}
	brpp = 0;
	for (int i = 1; i <= 1440; i++){
		brpp += x[i];
		brpp += y[i];
	}
	rez = 0;
	int i = 0;
	while (rez == 0){
		i += 1;
		rez += x[i];
		rez -= y[i];	
	}
	if (rez > 0)
		vodi = 1;
	else
		vodi = -1;
	preokret = 0;
	for (int j = i + 1; j <= 2880; j++){
		rez += x[j];
		rez -= y[j];
		if (rez * vodi < 0){
			preokret += 1;
			vodi = -vodi;
//			cout << "x    " << j << " " << rez << " " << preokret << "\n"; 
		}		
	}
	cout << brpp <<"\n";
	cout << preokret;
	
  return 0;
}

