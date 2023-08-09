#include <cstdio>
#include <iostream>

using namespace std;

int main()
    {
        int a[100001];
        for (int i = 2; i <= 100000; ++i)
            {
            int s = 1;
            for (int j = 2; j <= i/2; ++j)
                if ( !(i%j)) s += j;
            a[i] = s;
            }
        
        for (int i = 2; i < 100000; ++i) 
            for (int j = i+1; j <= 100000; ++j)
                if (a[i] == j && i == a[j])
                    printf("%d %d\n", i, j);

        printf ("\n\n");
        system("pause");
        return 0;
    }
