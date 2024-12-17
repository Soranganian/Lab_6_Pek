#include <iostream>

using namespace std;
//задание 2
int FirstNum(int n) {
    while (n > 9) {
        n /= 10;
    }
    return n;
}

int UmnNums(int n) {
    int m = 1;
    while (n > 0) {
        m *= (n % 10);
        n /= 10;
    }
    return m;
}

bool Sortir(int ni, int nj,int Fstnumi, int Fstnumj,int numsUmni, int numsUmnj) {
    if (Fstnumj == Fstnumj & 
        numsUmnj == numsUmni & 
        nj < ni) return true;
    if (Fstnumj == Fstnumi & 
        numsUmnj < numsUmni) return true;
    if (Fstnumj < Fstnumi) return true;
        return false;
                }

int main() {
    const int nm = 10000;
    int Fnum[nm];
    int umn[nm];
    
    int m[nm];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    
    for (int i = 0; i < n; i++) {
        Fnum[i] = FirstNum(m[i]);
        umn[i] = UmnNums(m[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Sortir(m[i], m[j],
                           Fnum[i], Fnum[j], 
                           umn[i], umn[j])) {
                swap(m[i], m[j]);
                swap(Fnum[i], Fnum[j]);
                swap(umn[i], umn[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << " " << Fnum[i] << " " << umn[i] << endl;
    }
    
    return 0;
}

