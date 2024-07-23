#include<bits/stdc++.h>
using namespace std;

int main(){
    int R;
    scanf("%d", &R);
    if(R<100) printf("%d", 100-R);
    else if(R<200) printf("%d", 200-R);
    else if(R<300) printf("%d", 300-R);
    else if(R<400) printf("%d", 400-R);
    return 0;
}