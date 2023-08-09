#include <iostream>

using namespace std;

int main () {
int i = 0 ;
int j = 0 ;
int a,b;
int arr[i],brr[j];
int sarr[i],sbrr[j];
cin >> a;
for (int k=0;k<a;k++) {
	cin >> arr[k];
	if (arr[k]<1440) {
	sarr[i]+=1;	
	}
	
}
cin >> b;
for (int k=0;k<b;k++){
	cin >> brr[k];
	if (brr[k]<1440) {
	sbrr[i]+=1;	
	}
}
















cout << sarr[i] + sbrr[j] ;

return 0;
}

