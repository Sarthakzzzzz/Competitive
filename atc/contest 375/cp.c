#include <stdio.h>
#define MAX_N 3000
char grid[MAX_N][MAX_N];
char temp[MAX_N][MAX_N];
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", grid[i]);
    }

    for (int layer = 0; layer < N / 2; layer++) {
        for (int i = layer; i < N - layer - 1; i++) {
            int j = layer;

            if (i == layer || i == N - layer - 1 || j == layer || j == N - layer - 1) {
                temp[i][N - layer - 1 - j] = grid[j][i];
            } else {
                temp[i][N - layer - 1 - j] = grid[N - layer - 1 - j][N - layer - 1 - i];
            }


            temp[N - layer - 1 - j][i] = grid[i][N - layer - 1 - j];
            temp[N - layer - 1 - j][N - layer - 1 - i] = grid[j][i];
            temp[j][i] = grid[N - layer - 1 - i][N - layer - 1 - j];
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", temp[i]);
    }

    return 0;
}