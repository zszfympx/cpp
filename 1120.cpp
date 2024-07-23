#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
struct Ticket {
    int price, time, used;
} q[MAXN];
int head, tail, n, cost;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int op, price, time;
        scanf("%d%d%d", &op, &price, &time);
        if (op == 0) {
            cost += price;
            q[tail].time = time + 45;
            q[tail++].price = price;
        } else {
            while (head < tail && q[head].time < time) {
                head++;
            }
            bool found = false;
            for (int j = head; j < tail; ++j) {
                if (q[j].price >= price && q[j].used == 0) {
                    found = true;
                    q[j].used = 1;
                    break;
                }
            }
            if (!found) cost += price;
        }
    }
    printf("%d", cost);
    return 0;
}