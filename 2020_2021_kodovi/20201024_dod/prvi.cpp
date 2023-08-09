#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int p;

int main ()
{
	
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	cin >> p;
	
	int donjaGranica = 0, gornjaGranica = n - 1;
	int sredina;
	
	while(donjaGranica < gornjaGranica)
	{
		sredina = (donjaGranica + gornjaGranica) / 2;
		
		if(a[sredina] >= p)
			gornjaGranica = sredina;
			
		else
			donjaGranica = sredina + 1;
	}
	
	// cout << donjaGranica << " " << sredina << " " << gornjaGranica;
	int minm,maks,dg=donjaGranica,gg=gornjaGranica;
	while (a[dg]==p)
		dg--;
	while (a[gg] == p)
		gg++;

dg++;
gg--;

	cout << "\nNajmanji indeks na kojem se p pojavljuje = " << dg;
	cout << "\nNajveci indeks na kojem se p pojavljuje = " << gg;
	cout << "\np se pojavljuje " << gg-dg+1 << " puta.";
	
	return 0;
}

