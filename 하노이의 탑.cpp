#include <cstdio>
int n;
void hanoi(int x, int y, int count) {
    if (!count) return;
    hanoi(x, 6 - x - y, count - 1);
    printf("%d %d\n", x, y);
    hanoi(6 - x - y, y, count - 1);
}
int main() {
    scanf_s("%d", &n);
    printf("%d\n", (1 << n) - 1);
    hanoi(1, 3, n);
    return 0;
}


