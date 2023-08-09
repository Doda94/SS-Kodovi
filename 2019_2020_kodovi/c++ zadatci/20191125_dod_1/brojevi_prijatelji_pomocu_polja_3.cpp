#include <cstdio>
#include <iostream>

using namespace std;

int a[100000001], br, n;

int main()
    {
        printf("n: ");
        scanf("%d",&n);
        for (int i = 2; i <= n; ++i) a[i] = 1;

        for (int i = 2; i <= n/2; ++i)
            for (int j = 2*i; j <= n; j+=i)
                a[j]+=i; 
                    
        for (int i = 2; i <= n; ++i) 
            if (a[i] > i && a[i] < n && a[a[i]] == i)
                    {
                    printf("%7d %7d\n", i, a[i]);
                    br++;
                    }

        printf ("\nKolicina: %d\n\n", br);
        system("pause");
        return 0;
    }
