#include<bits/stdc++.h>
using namespace std;
int main(){
	int p, ans = 0;
	scanf("%d", &p);
	for(int i = 1; i<=p; i++){
		ans = ans*2+2;
	}
	printf("%d", ans);
	return 0;
}