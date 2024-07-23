#include <bits/stdc++.h>
using namespace std;
int n, a[5001];
int main(){
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1, a+1+n, [](const int &x, const int &y){return x>y;});
    int book[5001] = {}, ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = a[i]; j>=1; j++){
            if(book[j]==0){
                book[j] = 1;
                ans++;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}