

#include <iostream>

#define N_MAX 51

int N;
int map[N_MAX][N_MAX];

int main() {

    freopen("B1938_BFS_input.txt","r",stdin);
    std::cin >> N;

    for (int i = 1; i<= N; ++i) {
        for (int j = 1; j<= N; ++j) {
            std::scanf("s", map[i][j]);
        }
    }

    return 0;
}