#include <stdio.h>
int main() {
    int n;
    scanf_s("%d", &n);
    for (int i = 2; i < n; i++) {
        if (0 == n % i) {
            printf("NO");
            return 0;
        }
    }
    if (n == 1) {
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}