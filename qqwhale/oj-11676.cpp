#include<bits/stdc++.h>
using namespace std;
int n, ans, arr[10010][10];

void dfs(int cnt, int tmp[], int sum){
	if(cnt==10){
		if(sum==n){
			for(int i = 0; i<10;i++){
				arr[ans][i] = tmp[i];
			}
			ans++;
		}
	}
	else{
		for(int i = 1; i<=3; i++){
			tmp[cnt] = i;
			dfs(cnt+1, tmp, sum+i);
		}
	}
}

int main(){
	scanf("%d", &n);
	if(n>=10&&n<=30){
		int tmp[10] = {0};
		dfs(0, tmp, 0);
		printf("%d\n", ans);
		for(int i = 0; i<ans; i++){
			for(int j = 0; j<10; j++){
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("0");
	}
	return 0;
}