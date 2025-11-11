#include <stdio.h>
#include <math.h>

int main() {
    double a, d;
    int n, type;
    scanf("%lf %lf %d %d", &a, &d, &n, &type);
    if (type == 1) {
        for (int i = 0; i < n; i++) {
            printf("%.2lf ", a + i * d);
        }
    } else {
        for (int i = 0; i < n; i++) {
            printf("%.2lf ", a * pow(d, i));
        }
    }
    return 0;
}
