 
#include <iostream>
using namespace std;

int a[20];          // deklarasi array a dengan ukuran 20
int n;              // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {      // procedur untuk input
    while (true) {  // looping
        cout << "Masukkan banyaknya elemen pada array : ";  // Output ke layat
        cin >> n;       // Input dari pengguna
        if (n <= 20)    // Jika n kurang dari atau sama dengan 20
            break;      // Keluar dari loop
        else {          // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen .\n"; // Output ke layar
        }
    }
    cout << endl;                           // Output baris kosong
    cout << "=====================" << endl;    // Output ke layar
    cout << "Masukkan Elemen Array" << endl;    // Output ke layar
    cout << "=====================" << endl;    // Output ke layar

    for (int i = 0; i < n; i++) {           // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";      // Output ke layar
        cin >> a[i];                                // Input dari pengguna

    }
}

void bubbleSortArray() {      //prosedur untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {       // Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0 < n - i; j++) {  // jika nilai pada a[j] lebih besar dari a[j+1]
            if (a[j] > a[j + 1]) {      // Simpan nilai a[j] ke variabel sementara temp
                int temp = a[j];        // Assign nilai a[j + 1] ke a[j]
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void unsorted() {               // Output baris kosong
    cout << endl;           // Output baris kosong
    cout << "==============================" << endl;               // Output ke layar
    cout << "Elemen Array yang belum tersusun" << endl;             // Output ke layar
    cout << "===============================" << endl;              // Output ke layar
    for (int j = 0; j < n; j++) {                       // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                           // Output ke layar
    }
}

void display() {        // Prosedur untuk menampilkan hasil
    cout << endl;           // Output baris kosong
    cout << "==============================" << endl;               // Output ke layar
    cout << "Elemen Array yang telah tersusun" << endl;             // Output ke layar
    cout << "===============================" << endl;              // Output ke layar
    for (int j = 0; j < n; j++) {                       // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                           // Output ke layar
    }
    cout << endl;               // output baris kosong 
}

int main() {
    input();        // Memanggil prosedur input
    unsorted();     // Memanggil prosedur unsrted() dari
    bubbleSortArray();  // Memanggil prosedur bubblSortArray()
    display();      // Memanggil prosedur display()
    return 0;
}


