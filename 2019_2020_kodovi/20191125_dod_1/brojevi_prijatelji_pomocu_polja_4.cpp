/* brojevi prijatelji */

#include <cstdio>
#include <iostream>
#include <ctime>

using namespace std;

int a[10000001], br, n, t;

int main()
    {
        printf("n: ");
        scanf("%d",&n);
        t = clock();

        for (int i = 1; i <= n/2; ++i)
            for (int j = 2*i; j <= n; j+=i)
                a[j]+=i; 
                    
        for (int i = 2; i <= n; ++i) 
            if (a[i] > i && a[i] <= n && a[a[i]] == i)
                    {
                    printf("%8d %8d\n", i, a[i]);
                    br++;
                    }
        printf ("\nKolicina: %d\n\n", br);
        
        printf("vrijeme: %.3f s\n\n", (clock() - t)/1000.);
//        system("pause");
        return 0;
    }
