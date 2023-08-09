#include <cstdio>
#include <iostream>

using namespace std;

int a[100001];

int main()
    {

        for (int i = 2; i <= 100000; ++i)
            {
            int s = 1;
            for (int j = 2; j <= i/2; ++j)
                if ( !(i%j)) s += j;
            a[i] = s;
            }
        
        for (int i = 2; i <= 100000; ++i) 
            if (a[i] > i && a[i] < 100000 && a[a[i]] == i)
                    printf("%d %d\n", i, a[i]);

        printf ("\n\n");
//        system("pause");
        return 0;
    }
