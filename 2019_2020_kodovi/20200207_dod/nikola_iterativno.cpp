#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;
int a[1001][1001];
int v[1001];
int inf = 1061109567;

int main()
{
  int N;
  cin >> N;
  for (int i = 1; i <= N; ++i)
    cin >> v[i];
  memset(a, 0x3f, sizeof a);
  a[2][1] = v[2];
  a[1][1] = a[2][1] + v[1];
  for (int j = 2; j <= N; ++j)
  {
    for (int i = 1; i <= N; ++i)
    {
      if (a[i][j-1] < inf && i + j <= N)
      {
      	a[i+j][j] = a[i][j-1] + v[i+j];
	  }      
	}
	for (int i = N; i >= 1; --i)
	  if (i - j > 0 && a[i][j] < inf &&
	  	  a[i][j] + v[i-j] < a[i-j][j])
	    a[i-j][j] = a[i][j] + v[i-j];
  }
  int m = inf;
  for (int j = 1; j <= N; ++j)
    m = min(m, a[N][j]);
/*
  for (int i = 1; i <= N; ++i)
  {
  	for (int j = 1; j <= N; ++j)
  	  if (a[i][j] == inf)
  	    printf("  oo ");
      else printf("%4d ", a[i][j]);
    printf("\n");
  }
*/
  cout << m;
  
//  system("pause");
  return 0;
}

