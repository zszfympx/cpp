#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[10];
    scanf("%d-%d%d%d-%d%d%d%d%d-%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7], &nums[8], &nums[9]);
    int sum = 0;
    for(int i = 0; i<9; i++){
        sum+=nums[i]*(i+1);
    }
    if(nums[9]==sum%11)
}