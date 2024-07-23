#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	string tmp;
	while(cin>>tmp) {
		s+=tmp;
	}
	long long cnt_a=0, cnt_b=0;
	for(char c:s){
		if(c=='W') cnt_a++;
		else if(c=='L') cnt_b++;
		else if(c=='E') break;
		if(abs(cnt_a-cnt_b)>=2&&(cnt_a>=11||cnt_b>=11)){
			printf("%lld:%lld\n", cnt_a, cnt_b);
			cnt_a=0, cnt_b=0;
		}
	}
	printf("%lld:%lld\n\n", cnt_a, cnt_b);
	cnt_a=0, cnt_b=0;
	for(char c:s){
		if(c=='W') cnt_a++;
		else if(c=='L') cnt_b++;
		else if(c=='E') break;
		if(abs(cnt_a-cnt_b)>=2&&(cnt_a>=21||cnt_b>=21)){
			printf("%lld:%lld\n", cnt_a, cnt_b);
			cnt_a=0, cnt_b=0;
		}
	}
	printf("%lld:%lld", cnt_a, cnt_b);
	return 0;
}