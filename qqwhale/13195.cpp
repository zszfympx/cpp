#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    char c[10];
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6], &c[7], &c[8], &c[9]);
    for(int i = 0; i<10; i++){
        if(c[i]=='X') a[i] = 10;
        else a[i] = c[i] - '0';
    }
    int sum = 0;
    for(int i = 0; i<9; i++){
        sum+=a[i]*(i+1);
    }
    if(sum%11==a[9]){
        printf("Right");
    }else{
        printf("%d-%d%d%d-%d%d%d%d%d-", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
        if(sum%11==10) putchar('X');
        else putchar(sum%11+'0');
    }
    return 0;
}