#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk menggabungkan dua subarray
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1; // Ukuran subarray pertama
    int n2 = r - m; // Ukuran subarray kedua

    // Membuat array sementara
    int L[n1], R[n2];

    // Mengisi array sementara
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    // Menggabungkan array sementara kembali ke array asli
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin elemen yang tersisa dari L[], jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin elemen yang tersisa dari R[], jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi utama yang mengurutkan arr[l..r] menggunakan merge()
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Mencari titik tengah untuk membagi array menjadi dua setengah
        int m = l+(r-l)/2;

        // Mengurutkan setengah pertama dan kedua
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        // Menggabungkan dua setengah yang telah diurutkan
        merge(arr, l, m, r);
    }
}

// Fungsi untuk mencetak array
void printArray(int A[], int size) {
    int i;
    for (i=0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main(){   

    // Membaca ukuran array
    cout << "\nMasukkan Size dari array anda : \n";
    int arr_size; cin >> arr_size; 

    // Membaca elemen array
    cout << "\nmasukan elemen array : \n";
    int arr[arr_size];for(auto &a : arr) cin >> a; 

    mergeSort(arr, 0, arr_size - 1); // Mengurutkan array

    cout << "\nArray yang telah di sort adalah : \n"; // Mencetak array yang telah diurutkan
    printArray(arr, arr_size);
    return 0;
}


















