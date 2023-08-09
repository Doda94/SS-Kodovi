#include<cstdio>
#include<iostream>
#include<ctime>
#include<algorithm>

using namespace std;

int cmp(int x,int y)
    {
        return x%10 < y%10;
    }

void ispis(int a[],int n)
    {
        for (int i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
        return;
    }   
int main()
{
    srand(time(0));
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) a[i]=rand()%200+1;
    ispis(a,n);
    sort(a,a+n,cmp);
    ispis(a,n);
    reverse(a,a+n);
    ispis(a,n);
    
    system("pause");
    return 0;
}
