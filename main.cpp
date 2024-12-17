#include <iostream>
using namespace std;

const int nm = 100000;

bool isNumsDifferent(int n) {
    int m[nm] = {0};
    int i = 0;
    while (n > 0) {
        m[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = 0; j < i; j++) {
        for (int k = j + 1; k < i; k++) {
            if (m[j] == m[k]) return false;
        }
    }
    return true;
}

int main()
{
    //задание 4.1   
    int seq[nm] = {0};
    int n;
    cout << "entre elem" << endl;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
            cin >> seq[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (!isNumsDifferent(seq[i])) {
            seq[i] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seq[i] != 0 & seq[j] != 0) break;
            if (seq[i] == 0 & seq[j] != 0) {
                seq[i] = seq[j];
                seq[j] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (seq[i] == 0) {
            n = i;
            break;
        }
    }
    
    int n_copy = n;
    for (int i = 0; i < n_copy; i++) {
        for (int j = i + 1; j < n_copy; j++) {
            if ((seq[i] * seq[j]) % 14 == 0) {
                seq[n] = seq[i];
                seq[n + 1] = seq[j];
                n += 2;
            } 
        }
    }
    
    for (int i = 0; i < n; i++) {
            cout << seq[i] << " ";
    }
    return 0;
}