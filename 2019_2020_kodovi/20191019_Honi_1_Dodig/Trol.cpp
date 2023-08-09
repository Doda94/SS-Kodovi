 #include <iostream>
 #include <math.h>

 using namespace std;
 int q;
 int w[101];
 int l,r,a,b;
 int main() {
 	cin >> q ;
 	for (int i = 0;i<q;i++){
 	cin  >> l >> r;
 		while (r>=l){
 			if (r>9){
 				int c = r;
 				while (c>9){
 					a += c%10;
 					c = c/10;
 					r = c;
				 }
			 }
			if (r<10){
				a += r;
			}
			r -= 1;
		}
//		if (a>10) {
//			int c = a;
//			a = 0;
//			while (c>10){
//				a += c%10;
//				c = c/10;
//			}
//		}
		
 	
  	w[q] = a;
	  }

	 
	 
	
	
	 for (int i=0;i<q;i++){
	 	cout << w[q] << "\n";
	 }
	
 return 0;
 }

