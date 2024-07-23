#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;

int a[maxn], n, ans;
char c;
string s;

int main(){
	scanf("%d", &n);
	cin>>s;
	for(int i = 0; i<n; i++){
		a[i] = s[i]-'0';
	}
	for(int i = 0; i<n; i++){
		if(a[i]==0) continue;
		else{
			int l = i, r = n;
			for(int j = i; j<n; j++){
				if(a[j]==0){
					r = j;
					break;
				}
			}
			if(r==n) break;
			ans+=r-l+1;
			a[l] = 0;
			a[r] = 1;
		}
	}
	printf("%d", ans);
}