#include<bits/stdc++.h>
using namespace std;

map<int, int> pass1;
map<int, int> pass2;

int main(){
	string s1, s2,s3;
	cin>>s1>>s2>>s3;
	for(int i = 0; i<s1.length(); i++){
		if(pass1[s1[i]]==0||pass1[s1[i]]==s2[i]){
		pass1[s1[i]]=s2[i];
		pass2[s2[i]]=s1[i];
		}else{
			puts("Failed");
			return 0;
		}
	}
	for(char i='A'; i<='Z'; i++){
		if(pass1[i]==0||pass2[i]==0){
			puts("Failed");
			return 0;
		}
	}
	for(int i = 0; i<s3.length(); i++){
		putchar(pass1[s3[i]]);
	}
	return 0;
}