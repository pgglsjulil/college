#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 7;

vector<int> children[MAX];

int jumlah_anak_buah[MAX];

int hitung(int karyawan){
    jumlah_anak_buah[karyawan] = 0;
    for(int anak_buah : children[karyawan]){
        jumlah_anak_buah[karyawan] += hitung(anak_buah) + 1;
    }
    return jumlah_anak_buah[karyawan];
}

int main(){
    int n;
    cin >> n;
    // input jumlah karyawan

    for(int i = 2; i <= n; i++){
        int bos;
        cin >> bos;
        children[bos].push_back(i);
    }

    hitung(1);

    for(int i = 1; i <= n; i++){
        cout << jumlah_anak_buah[i] << ' ';
    }
}