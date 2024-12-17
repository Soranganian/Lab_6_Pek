#include <iostream>

using namespace std;

int main()
{
    //задание 3
    const int nmax = 100;
    int minsum, index;
    minsum = index = 1000000;
    int columnSum[nmax] = {0};
    
    int matrix[nmax][nmax];
    int n, m;
    cout << "ввсети матр n x m" << endl;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            columnSum[j] += matrix[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (columnSum[i] < minsum) {
            minsum = columnSum[i];
            index = i;
        };
    }
    
    for (int i = 0; i < n; i++) {
        matrix[i][index] += 3;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

