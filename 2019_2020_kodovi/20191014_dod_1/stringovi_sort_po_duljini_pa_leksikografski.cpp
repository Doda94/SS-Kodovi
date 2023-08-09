#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int cmp(string s, string t)
{
  if (s.length() == t.length())
  	return s < t;
  return s.length() < t.length();
}

string X[50];

int main()
{
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i)
    cin >> X[i];
  
  cout << endl;

  sort(X, X + N, cmp);
  
  for (int i = 0; i < N; ++i)
    cout << X[i] << endl;
    
  system("pause");
  return 0;
}

