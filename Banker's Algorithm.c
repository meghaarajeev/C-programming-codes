#include <stdio.h>

int main(void)
{
    int allocation[20][20], max[20][20], need[20][20], available[20], sequence[20];
    int m, n, status[20], c = 0, completed = 0, count;
    int i, j, step;

    printf("Enter the number of processes and resources: ");
    scanf("%d %d", &m, &n);

    printf("Enter the allocated matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    printf("Enter the max matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    printf("Enter the available resources:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &available[i]);
    }

    for (i = 0; i < m; i++) {
        status[i] = 0;
    }

    for (step = 0; step < m; step++) {
        for (i = 0; i < m; i++) {
            if (status[i] == 0) {
                count = 0;
                for (j = 0; j < n; j++) {
                    if (need[i][j] <= available[j]) {
                        count++;
                    }
                }
                if (count == n) {
                    for (j = 0; j < n; j++) {
                        available[j] += allocation[i][j];
                    }
                    status[i] = 1;
                    sequence[c] = i + 1;
                    c++;
                    completed++;
                }
            }
        }
    }

    if (completed == m) {
        printf("System is in a safe state.\nSafe sequence: ");
        for (i = 0; i < m; i++) {
            printf("%d ", sequence[i]);
        }
        printf("\n");
    } else {
        printf("System is in an unsafe state.\n");
    }

    return 0;
}
