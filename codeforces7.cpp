#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;
    char grid[n][m];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    int dx[] = {-1, 1, 0, 0}; // this access the row up, down, left, right  
    int dy[] = {0,0, -1, 1}; // this access the column up down, left, right

    int count = 0;
    for(int i = 0; i < n; ++i) {// iterate the rows
        for(int j = 0; j < m; ++j) { // iterate the columns
            if(grid[i][j] == 'W') { // check if its rows and columns == for Wolf
                for(int k = 0; k < 4; ++k) { // 
                    int ns = i + dx[k];
                    int nj = j + dy[k];
                    if(ns >= 0 && ns < n && nj >= 0 && nj < m && grid[ns][nj] == 'P') {
                        count++;
                        grid[ns][nj] = '.';
                        break;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}