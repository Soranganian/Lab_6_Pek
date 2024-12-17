#include <iostream>
using namespace std;

int main()
{
    //задание 4.0
    const int nm = 100;
    int seq[nm][nm];
    int n, m;
    cout << "ввести матр n x m" << endl;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> seq[i][j];
        }
    }
    seq[0][0] = seq[1][2] = seq[2][3] = seq[3][1] = 0;
    seq[0][1] = seq[1][0] = seq[1][1];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << seq[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

