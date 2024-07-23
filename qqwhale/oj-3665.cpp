#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    vector<int> nums;
    for(int i = 0; i<n; i++) scanf("%d", nums[i]);
    int x;
    scanf("%d", &x);
    for(int i = 0; i<n; i++) if(nums[i]!=x)printf("%d ", nums[i]);
    return 0; 
}