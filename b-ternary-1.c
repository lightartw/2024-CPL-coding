//
// Created by lenovo on 24-10-14.
//
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(a[i]);
        int check = 1;
        int sum = 0;

        for (int j = 0; j < len; j++) {
            if (a[i][j] != '0' && a[i][j] != '1' && a[i][j] != 'Z') {
                printf("Radix Error\n"); check = 0; break;
            }
            else if (a[i][j] == '1') {
                sum += pow(3, len-j-1);
            }
            else if (a[i][j] == 'Z') {
                sum += (-1)*pow(3, len-j-1);
            }
        }
        if (check) {
            printf("%d\n", sum);
        }
    }

    return 0;
}
