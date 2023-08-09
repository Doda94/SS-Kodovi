#include<iostream>
#include<cstdio>
#include<vector>
#include<set>

using namespace std;

typedef pair<int,int> pii;

#define x first
#define y second

int n, m;             //broj cvorova i bridova
int start, finish;    //pocetni i krajnji cvor
vector<pii> ls[1000]; //lista susjedstva
int d[1000];          //udaljenosti do pojedinog cvora
set<pii> s;           //set parova za dijkstru

int main()
{
    scanf("%d %d", &n, &m);
    scanf("%d %d", &start, &finish);
    for(int i = 0; i < m; ++i)
    {
        int a, b, c; //brid od a do b sa cijenom c
        scanf("%d %d %d", &a, &b, &c);
        ls[a].push_back(pii(b, c));
//
        ls[b].push_back(pii(a, c)); //ako je graf neusmjeren
    }
    
    memset(d, 63, sizeof d); //inicijalizacija udaljenosti na veliki broj
    d[start] = 0; //udaljenost do pocetnog cvora je 0
    s.insert(pii(0, start)); //druga vrijednost je index cvora, a prva je
                             //udaljenost do njega, tako ce sve biti sortirano
                             //od najblizeg do najdaljeg
    while(!s.empty())
    {
        int a = s.begin()->y;// -> umjesto . jer je s.begin() iterator (pointer)
        s.erase(s.begin());
        
        if(a == finish) //ovo treba maknuti ako su potrebne udaljenosti do svih
            break;      //ostalih cvorova, a ne samo finish
        
        for(int i = 0; i < ls[a].size(); ++i) //po svim susjedima
        {
            int b = ls[a][i].x; //susjed
            int c = ls[a][i].y; //cijena brida do tog susjeda
            if(d[a] + c < d[b]) //ako je cijena do a + cijena od a do b manja od
            {                   //postojece cijene do b
                s.erase (pii(d[b], b)); //obavezno obrisati stari pair iz seta
                d[b] = d[a] + c;        //updateanje udaljenosti
                s.insert(pii(d[b], b)); //ponovo ubacivanje u set
            }
        }
    }
    
    if(d[finish] > 1000000000)
        puts("Nemoguce");
    else
        printf("%d\n", d[finish]);
    system("pause");
    return 0;
}
