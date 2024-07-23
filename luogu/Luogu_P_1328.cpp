#include<bits/stdc++.h>
using namespace std;

int a[210], b[210];
int vs[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};

int main(){
    int n, na, nb, ansa = 0, ansb = 0;
    scanf("%d%d%d", &n, &na, &nb);
    for(int i = 0; i<na; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<nb; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i<n; i++){
        ansa += vs[a[i % na]][b[i % nb]];  
        ansb += vs[b[i % nb]][a[i % na]];
    }
    printf("%d %d", ansa, ansb);
    return 0;
}