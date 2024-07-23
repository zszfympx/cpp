#include <bits/stdc++.h>
using namespace std;

char buf[1<<20],*p1,*p2;
#define gc() (p1 == p2 && (p2 = (p1 = buf) + fread(buf,1,1<<20,stdin), p1 == p2) ? 0 : *p1++)
template <typename T>
inline void read(T &x){
	T w=1; x=0;
	char c=gc();
	while(!isdigit(c)){ w|=(c=='-'); c=gc();}
	while(isdigit(c)){ x=(x<<1)+(x<<3)+(c^48); c=gc();}  
	x=x*w; 
}

int sta[30];
char buf[1<<20], pbuf[1<<20], *p = pbuf, *s = buf, *t = buf;

#define put1(ch) (p - pbuf == bsiz ? fwrite(pbuf, 1, bsiz, stdout), p = pbuf, *p++ = ch : *p++ = ch)

inline void putint(int x){
    register int top = 0;
    if (x<0) put1('-'), x = -x;
    do{
       sta[top++]=x%10;
       x/=10;
    }while(x>0);
    while (top) put1(sta[--top]^48);
    put1(' ');
}

int main(){
    int a, b;
   	read(a); read(b);
    int d=a%b;
    int c=a/b;
    for(int i=d;i<b;i++) putint(c);
    for(int i=0;i<d;i++) putint(c+1);
}
