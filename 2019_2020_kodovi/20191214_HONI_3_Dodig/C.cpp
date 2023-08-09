#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long n,gol[275],rez1,rez2,naj1,naj,ner,vodi,pr,prp,tr,najp,najm;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;

for (int i = 1; i<=n;i++){
	cin >> gol[i];	
	if (vodi != 0)
		tr = vodi;
	prp = pr;
	if (naj > naj1)
		naj1=naj;
	if (gol[i] == 1){
		rez1++;
		vodi++;
	}
	if (gol[i] == 2){
		rez2++;
		vodi--;
	}
	if (rez1 == rez2)
		ner++;

	if (vodi > 0 && tr < 0){
		pr++;
		naj = 0;
	}
	else if (vodi < 0 && tr > 0){
		pr++;
		naj = 0;
	}
	else if (vodi == 0){
		naj = 0;
		naj++;
	}
	
	if (pr == prp)
		naj++;
	
	
	
	
		
		
		
	
}


cout << rez1 << " " << rez2 << "\n";
cout << ner+1 << "\n";
cout << naj1;


return 0;
}

