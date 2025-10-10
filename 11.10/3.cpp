
#include <iostream>
using namespace std;

int main(){
    int N, M, W;
    cin >> N >> M >> W;

    char arr[N][M];

     for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = '0';
        }
    }

    for (int i = 0; i < W; i ++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        arr[x][y] = '*';
    }

    int sos[8][2]{
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1},           {0, 1},
        {1, -1},  {1, 0},  {1, 1}
    };

     for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == '*') {
                for (int k = 0; k < 8; k++) {
                    int ni = i + sos[k][0];
                    int nj = j + sos[k][1];
                    
                    if (ni >= 0 && ni < N && nj >= 0 && nj < M && arr[ni][nj] != '*') {
                        if (arr[ni][nj] == '0') {
                            arr[ni][nj] = '1';
                        } else if (arr[ni][nj] >= '1' && arr[ni][nj] <= '8') {
                            arr[ni][nj]++;
                        }
                    }
                }
            }
        }
    }

    cout << "=======================================================================" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j];
            if (j < M - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
