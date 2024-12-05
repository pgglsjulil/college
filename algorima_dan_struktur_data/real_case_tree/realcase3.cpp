#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 7;

vector<int> children[MAX];
// children[node] akan berisi children dari nodes

int jumlah_anak_buah[MAX];
// menyimpan jumlah anak buah dari masing-masing nodes

//menghitung jumlah anak buah
int hitung(int karyawan) {
    jumlah_anak_buah[karyawan] = 0;
    for (int anak_buah : children[karyawan]) {
        jumlah_anak_buah[karyawan] += hitung(anak_buah) + 1;
    }
    return jumlah_anak_buah[karyawan];
}

int main() {
    int n;
    cin >> n;

    // input bos dari karyawan 2 sd n
    for (int i = 2; i <= n; i++) {
        int bos;
        cin >> bos; 
        children[bos].push_back(i);
    }
    
    hitung(1);

    // output jumlah anak buah dari masing-masing nodes
    for (int i = 1; i <= n; i++) {
        cout << jumlah_anak_buah[i] << " ";
    }
    return 0;
}
