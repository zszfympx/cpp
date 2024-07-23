#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> nums;

int main(){
    int n, a;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a);
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    int now = 0, sum = 0;
    for(int i : nums){
        sum+=now+i;
        now+=i;
    }
    printf("%.2f", (double)sum/n);
    return 0;
}