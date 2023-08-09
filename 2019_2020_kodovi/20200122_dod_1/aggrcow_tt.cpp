#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

#define w class
#define t template
#define o operator
#define q const
#define v void
#define i inline
#define r char
#define u input
w u{private:static q int BS = 1 << 16;FILE *filein;static r j[];r *g;r *h;v gB()
;public:u(FILE *fin=stdin){filein=fin;gB();};bool eof(){return h==j;}r nextChar(
){return *g;}i r readChar();i v skipWS();i unsigned readUnsigned();i int readInt
();};r u::j[u::BS];v u::gB(){g=j;h=j+fread(j,1,BS,filein);}r u::readChar(){r res
=*g++;if(g==h)gB();return res;}i bool myisspace(r c){return c<=' ';}v u::skipWS(
){while(!eof()&&myisspace(nextChar()))readChar();}unsigned u::readUnsigned(){
skipWS();unsigned res=0;while(!eof()&&isdigit(nextChar()))res=10u*res+(readChar(
)-48);return res;}int u::readInt(){skipWS();bool neg=false;if(!eof()&&nextChar()
=='-'){neg=1;readChar();}int res=static_cast<int>(readUnsigned());if(neg)res=-
res;return res;}
#undef u
#define u output
w u{private:static q int BS=1<<16;FILE *fileout;static r j[];r *g;r *BUFLIMIT;
public:v flushBuffer();u(FILE *fout=stdout):g(j),BUFLIMIT(j+BS-100){fileout=fout
;}~u(){flushBuffer();}i v o()(r c);i v o()(unsigned x);i v o()(int x);i v o()(q
r *s); v o()(q string &s){o()(s.c_str());}t<w A,w B>v o()(q A&a,q B&b){o()(a);o(
)(b);}t<w A,w B,w C>v o()(q A&a,q B&b,q C&c){o()(a);o()(b);o()(c);}t<w A,w B,w C
,w D>v o()(q A&a,q B&b,q C&c,q D&d){o()(a);o()(b);o()(c);o()(d);}t<w A,w B,w C,w
D,w E>v o()(q A&a,q B&b,q C&c,q D&d,q E&e){o()(a);o()(b);o()(c);o()(d);o()(e);}t
<w A,w B,w C,w D,w E,w F>v o()(q A&a,q B&b,q C&c,q D&d,q E&e,q F&f){o()(a);o()(b
);o()(c);o()(d);o()(e);o()(f);}};r u::j[u::BS];v u::flushBuffer(){r *p=j;while(p
<g)p+=fwrite(p,1,g-p,fileout);g=j;}v u::o()(r c){*g=c;++g;if(g>=BUFLIMIT)
flushBuffer();}v u::o()(unsigned x){r *old=g;do{*g=r(48+x%10u);x/=10u;++g;}while
(x);reverse(old,g);if(g>=BUFLIMIT)flushBuffer();}v u::o()(int x){if(x<0){o()('-'
); x =- x;} o()(static_cast<unsigned>(x));}v u::o()(q r*s){while(*s)o()(*s++);}
#undef u
#undef w
#undef t
#undef o
#undef q
#undef v
#undef i
#undef r

int n, c;
int t[100000];

bool provjera(int x)
{
    int i, j, rc = c - 1;
    for(i = 0; i < n - 1 && rc; ++i)
        for(j = i + 1; j < n; ++j)
            if(t[j] - t[i] >= x)
            {
                i = j - 1;
                --rc;
                break;
            }
    return !rc;
}

int main()
{
    input in;
    output out;
    int nt;
    nt = in.readUnsigned();
    while(nt--)
    {
        int i;
        n = in.readUnsigned();
        c = in.readUnsigned();
        for(i = 0; i < n; ++i)
            t[i] = in.readUnsigned();
        sort(t, t + n);
        int lo = 1, hi = (t[n-1] - t[0]) / (c - 1), mid;
        do
            if(provjera(mid = (lo + hi) / 2))
                lo = mid + 1;
            else 
                hi = mid - 1;
        while(lo <= hi);
        out(hi, '\n');
    }
    return 0;
}
