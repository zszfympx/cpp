#include<bits/stdc++.h>
using namespace std;

vector<int> nums, l(1000010), r(1000010);
stack<int> s;
int a;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d", &a);
		nums.push_back(a);
	}
	for(int i = 0; i<n; i++){
		while(!s.empty()&&nums[s.top()]>=nums[i]){
			r[s.top()]=i;
			s.pop();
		}
		if(s.empty()) l[i] = -1;
		else l[i] = s.top();
		s.push(i);
	}
	int ans = 0;
	for(int i = 0; i<n; i++){
		ans = max(ans, nums[i]*(r[i]-l[i]-1));
	}
	printf("%d", ans);
	return 0;
}