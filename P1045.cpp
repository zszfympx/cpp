#include<bits/stdc++.h>
using namespace std;

unsigned long long a[501]={1};

int main(){
	int p;
	scanf("%d", &p);
	printf("%d\n", (int)(p*log10(2))+1);
	for(;p>0;p-=60){
		unsigned long long f = 0;
		for(int i = 0; i<500; i++){
			if(p>60)a[i]<<=60;
			else a[i]<<=p;
			a[i]+=f;
			f=a[i]/10;
			a[i]%=10;
		}
	}
	a[0]=-1;
	for(int i = 499; i>=0; i--){
		putchar(a[i]+'0');
		if(i%50==0)putchar('\n');
	}
	return 0;
}