#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

long long r[1003],g[1003],b[1003],t,rj[1003][1003],sol[1003];

int main () {

 cin >> t;
 
 for (int i=0; i<t;i++){
 	cin >> r[i] >> g[i] >> b[i];
 	int k = 1;
 	while ((r[i] > 0 || g[i] > 0) && (g[i] > 0 || b[i] > 0)){
 		while (r[i] != 0 && g[i] != 0 && rj[i][k] <= 2){
 			r[i]--;
 			g[i]--;
 			rj[i][k]++;
 			k++;
		 }
		while (r[i] != 0 && b[i] != 0 && rj[i][k] <= 2){
 			r[i]--;
 			b[i]--;
 			rj[i][k]++;
 			k++;
		 }
 		while (b[i] != 0 && g[i] != 0 && rj[i][k] <= 2){
 			b[i]--;
 			g[i]--;
 			rj[i][k]++;
 	 		k++;
		 }	
	 }
//	if ((r[i] == 0 && g[i] == 0) || (g[i] == 0 && b[i] == 0) ){
//		
//			if (rj[i][k] <= 2){
//				rj[i][k]++;
// 	 			k++;
//			}
//			else {
//				k++;
//				rj[i][k]++;
//			}
//		}
 }
 
 
 for (int i = 0;i<t;i++){
 	int k = 1;
 	while (rj[i][k]!= 0){
 		sol[i] += rj[i][k];
 		k++;
 }
 	cout << sol[i] << "\n";
}


return 0;
}

