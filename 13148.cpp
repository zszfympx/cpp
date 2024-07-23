#include<bits/stdc++.h>
using namespace std;

typedef long long lld;

vector<lld> a, b;

int main(){
    lld n, k;
    scanf("%lld%lld", &n, &k);
    a.push_back(n);
    bool flag = true;
    while(flag){
		b.clear();
    	flag = false;
    	for(int i = 0; i<a.size(); i++){
    		if(a[i]>1){
    			b.push_back((int)a[i]/2.0);
    			b.push_back(a[i]%2);
    			b.push_back((int)a[i]/2.0);
    			flag = true;
    		}else{
    			b.push_back(a[i]);
    		}
    	}
    	a = b;
    }
    int ans = 0;
    for(int i = 0; i<k-1; i++){
    	if(a[i]==1) ans++;
    }
    printf("%d", ans);
    return 0;
}