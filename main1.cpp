#include <iostream>

using namespace std;

bool LastNumLess(int n1, int n2) {
    if ((n1 % 10) < (n2 % 10)) return true;
    return false;
}

int main() {
     // задание 1
    const int nm = 10000;
    int m[nm]  {1,2,3,7,8,8,11,13,12,14};
    int M[nm];
    copy(begin(m), end(m), begin(M));
    
    int n = 10;
    bool flag = false;
    
    for (int i = 0; i < nm; i++) {
        for (int j = i; j < nm; j++) {
            if (!flag) {
                if (i == 0 & m[i] == m[j] & i != j) flag = true;
            }
            if (LastNumLess(m[i], m[j])) swap(m[i], m[j]);
        }
        if (!flag) break;
    }
    
    if (flag) {
        for (int i = 0; i < n; i++) {
            cout << m[i] << " ";
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << M[i] << " ";
        }
    }
    
    return 0;
}

