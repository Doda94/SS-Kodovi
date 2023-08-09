#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
using namespace std;

int main () {
  int myints[] = {1,2,3};
  sort (myints,myints+3); // da bi obišao sve permutacije trebaš krenut od uzlazno sortanog arraya

  cout << "The 3! possible permutations with 3 elements:\n";
  
do {
    cout << myints[0] << " " << myints[1] << " " << myints[2] << endl;
  } while ( next_permutation(myints,myints+3) );

  cout << "Nakon permutacija: " << myints[0] << " " << myints[1] << " " << myints[2] << endl;
  return 0;
}
