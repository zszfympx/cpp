#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int minn=INT_MAX, pos, n, a[100010]; // 将最小值赋值为极大值，最小值的下标, 序列长度, 这个序列
        scanf("%d", &n);
        for(int i = 1; i<=n; i++){ // 从1开始枚举
            scanf("%d", &a[i]);
            if(minn>a[i]){ // 打擂台
                minn = a[i];
                pos = i;
            }
        }
        printf("%d\n", n-1); 
        for(int i = 1; i<=n; i++){
            if(i==pos) continue; // 如果当前值是最小值 则不需要替换
            printf("%d %d %d %d\n", pos, i, minn, minn-abs(i-pos));
        }
    }
    return 0;
}